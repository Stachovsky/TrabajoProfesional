/*
 * FatFS Test program
 *
 * This program contains a number of tests for ChaN's FatFS
 * on the lpc1769 module
 *
 * The idea is to create a generic test suite that can be used to
 * check if the SD card interface works.
 * Also, a timer is used to measure the amount of time needed by
 * different functions to check the timing.
 *
 * (c) Rob Jansen
 *
 * This software is free software, you may use it, enhance it
 * and share it as long as you like as long as this copyright
 * message stays in place.
 */

#include "LPC17xx.h"
#include "clocking.h"
#include "uart.h"
#include "small_printf.h"
#include "string.h"
#include "ff.h"

FATFS fs;

uint8_t spi_div_low = 250;
uint8_t spi_div_high = 10;

extern uint32_t timerproc_interval;

/*
 * Just for readability.
 * Writing KHZ(400) or MHZ(10) looks so much better than
 * 400000 or 10000000 in my code.
 */
#define KHZ(x) (x * 1000)
#define MHZ(x) (x * 1000000)

/*
 * printf() stuff.
 * Use small_printf and create a buffer for one line of text.
 * The define makes sure that I can use printf() as if nothing happened.
 */
#define STRLEN 255
#define N_ARGS    2
char str[STRLEN];
char line[STRLEN];
char *args[N_ARGS];

uint8_t Buffer[512]; /* Buffer to store a complete sector */

#define printf(...) { snprintf(str, STRLEN, __VA_ARGS__); UARTSendStr(3, str); }

/*
 * static void SetSPIClocks(low, high)
 *
 * Sets the divider values to create the low and high SPI clocks
 * that are used by the SD card driver.
 *
 * Note that the divier values are rounded up to the first even
 * value to generate a valid divider values that results in the
 * closest frequency that is not higher than the wanted frequency.
 */
static void SetSPIClocks(uint32_t low, uint32_t high)
{
	spi_div_low  = SystemCoreClock / low;
	spi_div_high = (SystemCoreClock+high-1) / high;

	if(spi_div_low & 1) spi_div_low++;
	if(spi_div_high & 1) spi_div_high++;
}

static void show_res (char *mesg, FRESULT rc)
{
	const char *res_str =
		"OK\0" "DISK_ERR\0" "INT_ERR\0" "NOT_READY\0" "NO_FILE\0" "NO_PATH\0"
		"INVALID_NAME\0" "DENIED\0" "EXIST\0" "INVALID_OBJECT\0" "WRITE_PROTECTED\0"
		"INVALID_DRIVE\0" "NOT_ENABLED\0" "NO_FILE_SYSTEM\0" "MKFS_ABORTED\0" "TIMEOUT\0"
		"LOCKED\0" "NOT_ENOUGH_CORE\0" "TOO_MANY_OPEN_FILES\0";
	FRESULT i;

	for (i = 0; i != rc && *res_str; i++) {
		while (*res_str++) ;
	}
	printf("    %s: res=%u FR_%s\n", mesg, (UINT)rc, res_str);
}

/*
 * Timer functions
 *
 * These functions use timer 0 to create a stopwatch with a 1 us resolution.
 * Generally these functions will be used in the same way as a regular stopwatch
 * is being used: first reset, then start, then stop and then read.
 * It is possible to read the timer while it is running to get intermediate
 * results although this is not the general way in which I intent to use it.
 *
 * Please note that there is some overhead in starting and stopping the timer.
 *
 */
void TimerReset()
{
	LPC_TIM0->TCR = 2;  /* Reset timer */
	LPC_TIM0->CTCR = 0; /* Timer mode  */
	LPC_TIM0->PR = SystemCoreClock/MHZ(1);
	LPC_TIM0->TCR = 0;
}

inline void TimerStart(void)
{
	LPC_TIM0->TCR = 1;
}

inline void TimerStop(void)
{
	LPC_TIM0->TCR = 0;
}

uint32_t TimerRead()
{
	return LPC_TIM0->TC;
}

/*
 * set_speed(char *s)
 *
 * Set the speed to the given number
 */
static void set_speed(char *s)
{
	FRESULT res;

	uint32_t speed = 0;
	while(*s != ' ')
	{
		/*
		 * Scan the line, calculate the number
		 */
		if((*s >= '0') && (*s <= '9'))
			speed = (speed * 10) + (*s-'0');
		else if((*s == 'k') || (*s == 'K'))
		{
			speed = speed * 1000;
			break;
		}
		else if((*s == 'm') || (*s == 'M'))
		{
			speed = speed * 1000000;
			break;
		}
		else
			break;
		s++;
	}
	SetSPIClocks(KHZ(400), speed);
	printf("Setting speed to: %d Hz\n", SystemCoreClock/spi_div_high);

	res = f_mount(0, &fs);

	if(res != FR_OK)
	{
		show_res("Error mounting filesystem", res);
	}

}

/*
 * set_timeout(char *s)
 *
 * Sets the timeout value to be used for calling the disk_timerproc() function.
 */
static void set_timeout(char *s)
{
	uint32_t timeout=0;

	while((*s >= '0') && (*s <= '9'))
	{
		timeout = (timeout * 10) + (*s - '0');
		s++;
	}

	if(timeout > 5)
	{
		timerproc_interval = timeout;
		printf("Changed 10 ms interval to %u ms\n", timeout);
	}
	else
	{
		printf("Invalid interval: not changed\n");
	}
}

/*
 * show_dir()
 *
 * Shows the directory of the SD card.
 * This function is meant as a support function to verify the card contents.
 */
static void show_dir(char *dirname)
{
	FRESULT res;
	DIR dir;
	FILINFO fileinfo;

	res = f_opendir(&dir, "/");
	if (res)
	{
		show_res("Cannot open dir", res);
		return;
	}

	for(;;)
	{
		res = f_readdir(&dir, &fileinfo);
		if((res != FR_OK) || !fileinfo.fname[0])
			break;
		printf("%c%c%c%c%c %u/%02u/%02u %02u:%02u %9lu  %s\n",
				(fileinfo.fattrib & AM_DIR) ? 'D' : '-',
				(fileinfo.fattrib & AM_RDO) ? 'R' : '-',
				(fileinfo.fattrib & AM_HID) ? 'H' : '-',
				(fileinfo.fattrib & AM_SYS) ? 'S' : '-',
				(fileinfo.fattrib & AM_ARC) ? 'A' : '-',
				(fileinfo.fdate >> 9) + 1980, (fileinfo.fdate >> 5) & 15, fileinfo.fdate & 31,
				(fileinfo.ftime >> 11), (fileinfo.ftime >> 5) & 63,
				fileinfo.fsize, &(fileinfo.fname[0]));

	}
}

/*
 * write_file()
 *
 * Writes a number of records to the file with the given name.
 * This function writes 50 sectors of 512 bytes
 */
static void write_file(char *fname)
{
	FIL file;
	FRESULT res;
	UINT written;
	uint32_t i, idx;


	res = f_open(&file, fname, FA_CREATE_NEW | FA_WRITE);
	if(res != FR_OK)
	{
		show_res("Cannot open file for writing", res);
		return;
	}

	for(i=0; i<50; i++)
	{
		/*
		 * Fill thebuffer with some data to check during read.
		 */
		for(idx=0; idx<512; idx++)
			Buffer[idx] = ((i * 3) + (idx * 5)) & 0xff;

		TimerReset();
		LPC_GPIO0->FIOSET |= 1<<22;
		TimerStart();
		res = f_write(&file, Buffer, 512, &written);
		TimerStop();
		LPC_GPIO0->FIOCLR |= 1<<22;

		if(res != FR_OK)
		{
			show_res("Error writing", res);
			break;
		} else
		{
			if(written == 512)
			{
				printf("Time: %u us\n", TimerRead());
			}
			else
			{
				printf("Time: %u us, write incomplete - wrote %d bytes\n", TimerRead(), (int)written);
			}
		}
	}
	res = f_close(&file);
	if(res != FR_OK)
		show_res("Error closing file", res);
	printf("\n");
}

/*
 * read_file()
 *
 * Reads the file with the given name.
 * This function reads blocks of 512 bytes
 */
static void read_file(char *fname)
{
	FIL file;
	FRESULT res;
	UINT read;
	uint32_t sum_read;
	uint32_t i, idx;
	uint32_t data_err;


	res = f_open(&file, fname, FA_READ);
	if(res != FR_OK)
	{
		show_res("Cannot open file for reading", res);
		return;
	}

	sum_read = 0;
	i=0;
	data_err = 0;

	while(!f_eof(&file))
	{
		TimerReset();
		LPC_GPIO0->FIOSET |= 1<<22;
		TimerStart();
		res = f_read(&file, Buffer, 512, &read);
		TimerStop();
		LPC_GPIO0->FIOCLR |= 1<<22;

		sum_read += read;

		if(res != FR_OK)
		{
			show_res("Error reading file", res);
			break;
		} else
		{
			/*
			 * Check data
			 */
			for(idx=0; idx<read; idx++)
			{
				if(Buffer[idx] != (((i * 3) + (idx * 5)) & 0xff)) data_err++;
			}
			i++;

			if(read == 512)
			{
				printf("Time: %u us\n", TimerRead());
			}
			else if(!f_eof(&file))
			{
				printf("Time: %u us, read incomplete - read %d bytes\n", TimerRead(), (int)read);
			} else
			{
				printf("Time: %u us, end of file reached total %u bytes read\n", TimerRead(), (int)sum_read);
			}
		}
	}
	if(data_err) printf("Error: data does not match expected pattern\n");

	res = f_close(&file);
	if(res != FR_OK)
		show_res("Error closing file", res);
	printf("\n");
}


static void write_log(char *fname)
{
	FIL file;
	FRESULT res;
	UINT written;
	uint32_t i;
	uint32_t write_time, sync_time;
	char logstr[80];

	res = f_open(&file, fname, FA_CREATE_NEW | FA_WRITE);
	if(res != FR_OK)
	{
		show_res("Cannot open file for writing", res);
		return;
	}

	for(i=0; i<250; i++)
	{
		snprintf(logstr, 80, "Logging some data. SysTick->Val = %u\n\r", SysTick->VAL);

		TimerReset();
		LPC_GPIO0->FIOSET |= 1<<22;
		TimerStart();
		res = f_write(&file, logstr, strlen(logstr), &written);
		TimerStop();
		LPC_GPIO0->FIOCLR |= 1<<22;
		write_time = TimerRead();

		TimerReset();
		TimerStart();
		f_sync(&file);
		TimerStop();
		sync_time = TimerRead();

		if(res != FR_OK)
		{
			show_res("Error writing", res);
			break;
		} else
		{
			if(written == strlen(logstr))
			{
				printf("Time: write %u us, sync %u us\n", write_time, sync_time);
			}
			else
			{
				printf("Time: write %u us, sync %u us, incomplete - wrote %d bytes\n", write_time, sync_time, (int) written);
			}
		}
	}
	res = f_close(&file);
	if(res != FR_OK)
		show_res("Error closing file", res);
	printf("\n");
}

static void type_file(char *fname)
{
	FIL file;
	FRESULT res;
	UINT read;


	res = f_open(&file, fname, FA_READ);
	if(res != FR_OK)
	{
		show_res("Cannot open file for reading", res);
		return;
	}

	while(!f_eof(&file))
	{
		res = f_read(&file, Buffer, 256, &read);

		if(res != FR_OK)
		{
			show_res("Error reading file", res);
			break;
		} else
		{
			UARTSend(3, Buffer, read);
		}
	}
	res = f_close(&file);
	if(res != FR_OK)
		show_res("Error closing file", res);
	printf("\n");
}

static void delete_file(char *fname)
{
	FRESULT res;

	res = f_unlink(fname);

	if(res != FR_OK)
		show_res("Error deleting file", res);
	else
	{
		printf("File %s deleted\n", fname);
	}

	return;
}

int get_line (		/* 0:End of stream, 1:A line arrived */
	char* buff,		/* Pointer to the buffer */
	int len			/* Buffer length */
)
{
	int rv, c, i;

	UARTPutChar(3, '\r');
	UARTPutChar(3, '>');

	rv = i = 0;
	for (;;) {
		c = UARTGetChar(3);			/* Get a char from the incoming stream   */
		if(c == 0x7f) c = '\b';		/* Rob: putty uses DEL for backspace ... */
		if (!c) return 0;			/* End of stream? */
		if (c == '\r') break;		/* End of line? */
		if (c == '\b' && i) {		/* Back space? */
			i--;
			UARTPutChar(3, c);
			UARTPutChar(3, ' ');
			UARTPutChar(3, c);
			continue;
		}
		if (c >= ' ' && i < len - 1) {	/* Visible chars */
			buff[i++] = c;
			UARTPutChar(3, c);
		}
	}
	buff[i] = 0;	/* Terminate with zero */
	UARTPutChar(3, '\n');
	UARTPutChar(3, '\r');

	return 1;
}

/*
 * Scan the given buffer for arguments,
 * split up the buffer and create *args[]
 * to point to each next argument on the line.
 */
void scan_args(char *buf, char *args[])
{
	int i;

	for(i=0; i<N_ARGS; i++) args[i] = 0L;

	i=0;
	while(*buf && (*buf != ' ')) buf++; /* Skip the command    */
	while(*buf == ' ') buf++;           /* and skip any spaces */
	while(*buf && (i < N_ARGS))
	{
		args[i] = buf;
		while(*buf && (*buf != ' ')) buf++; /* Forward to the next white space */
		while(*buf == ' ') buf++;           /* and skip the spaces             */
		i++;
	}
}

int main(void) {
	FRESULT res;

	LPC_GPIO0->FIODIR |= 1<<22;
	LPC_GPIO0->FIOCLR |= 1<<22;

	LPC_SC->PCLKSEL0 &= ~(3<<2);
	LPC_SC->PCLKSEL0 |= 1<<2;

	LPC_UseOscillator(LPC_MAIN_OSC);
	LPC_SetPLL0(100000000);

	/*
	 * The LPC_UseOscillator() and LPC_SetPLL0() function already
	 * reprogram the SysTick with the correct values.
	 * All that needs to be done here is let the timer run and
	 * generate interrupts.
	 */
	SysTick->CTRL |= 7;


	/*
	 * Default values for the SPI clock
	 * Use 400 kHz during init and 1 MHz during data transfer
	 *
	 * These values are believed to be reasonably safe values.
	 */
	SetSPIClocks(KHZ(400), MHZ(1));

	LPC_SC->PCLKSEL1 = (LPC_SC->PCLKSEL1 & ~(3<<18)) | (1<<18);
	UARTInit(3, 115200);

	printf("FatFS test program for LPC17xx\n");

	res = f_mount(0, &fs);

	if(res != FR_OK)
	{
		show_res("Error mounting filesystem", res);
	}

	while(1)
	{
		/*
		 * Get a line of text and split in command and arguments
		 */
		if(!get_line(line, STRLEN))
			continue;
		scan_args(line, args);

		if(strncmp(line, "speed", 5)==0)
		{
			set_speed(args[0]);
		}
		else if(strncmp(line, "timeout", 7) == 0)
		{
			set_timeout(args[0]);
		}
		else if(strncmp(line, "dir", 3) == 0)
		{
			show_dir(NULL);
		}
		else if(strncmp(line, "write", 5) == 0)
		{
			write_file(args[0]);
		}
		else if(strncmp(line, "read", 4) == 0)
		{
			read_file(args[0]);
		}
		else if(strncmp(line, "log", 3) == 0)
		{
			write_log(args[0]);
		}
		else if(strncmp(line, "type", 4) == 0)
		{
			type_file(args[0]);
		}
		else if(strncmp(line, "del", 3) == 0)
		{
			delete_file(args[0]);
		}
		else
			printf("Error: invalid command\n");
	}
	return 0 ; /* Never reached */
}

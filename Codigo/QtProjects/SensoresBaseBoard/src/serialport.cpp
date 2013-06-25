#include "serialport.h"

SerialPort::SerialPort()
{
}

void SerialPort::openPort()
{
  struct termios newtermios;

  this->fd = open(SERIAL_PORT_NAME,O_RDWR | O_NOCTTY);

  newtermios.c_cflag= B115200 | CS8 | CLOCAL | CREAD;
  newtermios.c_iflag=IGNPAR;
  newtermios.c_oflag=0;
  newtermios.c_lflag=0;
  newtermios.c_cc[VMIN]=0;
  newtermios.c_cc[VTIME]=1;

  cfsetospeed(&newtermios,B115200);
  cfsetispeed(&newtermios,B115200);


  if (tcflush(this->fd,TCIFLUSH)==-1) return;
  if (tcflush(this->fd,TCOFLUSH)==-1) return;
  if (tcsetattr(this->fd,TCSANOW,&newtermios)==-1) return;

}

void SerialPort::closePort(void){
    close(this->fd);
}

void SerialPort::sendToPort(char *data, int size)
{
    write(this->fd, data, size);
}

int SerialPort::readFromPort(char *data, int size)
{
  fd_set fds;
  struct timeval timeout;
  int count=0;
  int ret;
  int n;

  do {
    FD_ZERO(&fds);
    FD_SET (this->fd, &fds);

    timeout.tv_sec = 0;
    timeout.tv_usec = 100000;

    ret=select (FD_SETSIZE,&fds, NULL, NULL,&timeout);

    if (ret==1) {
      n=read (this->fd, &data[count], size-count);
      count+=n;
      data[count]=0;
    }
  } while (count<size && ret==1);

  return count;
}

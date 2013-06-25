#ifndef SERIALPORT_H
#define SERIALPORT_H

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "termios.h"
#include "fcntl.h"
#include "unistd.h"

#include "QDebug"

#define SERIAL_PORT_NAME "/dev/ttyUSB0"

class SerialPort
{
   int fd;

public:

    SerialPort();

    void openPort();

    void closePort();

    void sendToPort(char *data, int size);

    int readFromPort(char *data, int size);
};

#endif // SERIALPORT_H

/** \file SerialPort.cpp */

/*
 * SerialPort.cpp
 *
 *  Created on: Jun 24, 2011
 *      Author: fsilva
 */

#include "SerialPort.h"


//#define PARAMETROS_FILE "config.ini"

/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/

#ifndef PLATAFORM_WINDOWS //linux

SerialPort::SerialPort() {

	this->portConfigurated = false;
	this->portName = "";
	this->bautRate = 0;

//	this->portName = SERIAL_PORT_PATH;

//	// se recupera del archivo configuración la ruta del archivo de base de datos
//	ezxml_t xmlParametros = ezxml_parse_file(PARAMETROS_FILE);
//	if(xmlParametros == NULL){
//		cout << "Error archivo parametros" << endl;
//		return;
//	}
//	ezxml_t xmlPuertoSerie = ezxml_child(xmlParametros,"PuertoSerie");
//	if(xmlPuertoSerie == NULL){
//		cout << "Error archivo parametros" << endl;
//		return;
//	}
//
//	this->portName = xmlPuertoSerie->txt;
//
//	// se libera la memoria
//	ezxml_free(xmlParametros);


//	this->portHandle = open(this->portName.c_str(), O_RDWR | O_NOCTTY | O_NDELAY);
//
//	if (this->portHandle == -1){ //Opening of port failed
//		 //cout<<"Error apertura en el puerto serie"<<endl;
//		cout<<"[Error] No se tiene comunicación con el LG"<<endl;
//		return;
//	}



//	//flush serial port buffers
//	//this->portHandle

//	//Set the new options for the port...
//	int status = tcsetattr(this->portHandle, TCSANOW, &this->options);
//
//	if (status != 0){ //For error message
//		cout << "Configuring comport failed with status error = " << status << endl;
//	return;
//	}

//	//flush serial port buffers
//	//this->portHandle
//	this->closePort();

//	cout << endl << endl;
//	cout << hex << (int) this->options.c_iflag << endl;
//	cout << hex << (int) this->options.c_oflag << endl;
//	cout << hex << (int) this->options.c_cflag << endl;
//	cout << hex << (int) this->options.c_lflag << endl;
//	cout << hex << (int) this->options.c_line << endl;
//
//	for(int i=0; i< NCCS; i++)
//		cout << hex << (int) this->options.c_cc[i] << " - ";
//
//	cout << hex << (int) this->options.c_ispeed << endl;
//	cout << hex << (int) this->options.c_ospeed << endl;
//	cout << endl << endl;

}

/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/


SerialPort::~SerialPort() {

	close(this->portHandle);

}

/**********************************************************************************************/
/**********************************************************************************************/

bool SerialPort::configPort(){

	//Get the current options for the port...
//		tcgetattr(this->portHandle, &options);
		memset(&this->options, 0x00 , sizeof(this->options));

		//set the baud rate to 115200
		int baudRate = this->bautRate;
		cfsetospeed(&this->options, baudRate);
		cfsetispeed(&this->options, baudRate);

		//set the number of data bits.
//		this->options.c_cflag &= ~PARENB;  //Set parity to None
//		this->options.c_cflag &= ~CSTOPB; //set the number of stop bits to 1
//		this->options.c_cflag &= ~CSIZE;  // Mask the character size bits
//		this->options.c_cflag |= CS8; // Select 8 data bits
//		this->options.c_cflag &= ~CRTSCTS; //disable hardware flow control
//
		this->options.c_cflag |= (CLOCAL | CREAD | CS8); //Set local mode and enable the receivers
		this->options.c_cflag &= ~CRTSCTS;	//disable hardware flow control

		//set for non-canonical (raw processing, no echo, etc.)
		this->options.c_iflag = IGNPAR; // ignore parity
		this->options.c_iflag &= ~(IXON | IXOFF | IXANY);

		//this->options.c_oflag &= ~OPOST;
		this->options.c_oflag = 0; // raw output
//		this->options.c_oflag &= ~ONLCR;

//		this->options.c_lflag &= ~(ICANON | ECHO | ECHOE | ISIG);
		this->options.c_lflag = 0; // raw input
//		this->options.c_lflag = ICANON;


	//	//Time-Outs -- won't work with NDELAY option in the call to open
		this->options.c_cc[VMIN]  = 1;   // block reading until RX x characers. If x = 0, it is non-blocking.
//		this->options.c_cc[VTIME] = 100;   // timeout= x*.1 s
//		this->options.c_cc[VEOF] = 1;


		//Set the new options for the port
		tcflush(this->portHandle, TCIFLUSH);
		int status = tcsetattr(this->portHandle, TCSANOW, &this->options);

		if (status != 0){ //For error message
			cout << "Configuring comport failed with status error = " << status << endl;
			return false;
		}

		this->portConfigurated = true;
		return true;
}

/**********************************************************************************************/
/**********************************************************************************************/


bool SerialPort::openPort(){

//	this->portName = SERIAL_PORT_PATH;

//	if(this->portName == ""){
//		// se recupera del archivo configuración la ruta del archivo de base de datos
//		ezxml_t xmlParametros = ezxml_parse_file(PARAMETROS_FILE);
//		if(xmlParametros == NULL){
//			cout << "Error archivo parametros" << endl;
//			return false;
//		}
//		ezxml_t xmlPuertoSerie = ezxml_child(xmlParametros,"PuertoSerie");
//		if(xmlPuertoSerie == NULL){
//			cout << "Error nombre puerto" << endl;
//			return false;
//		}
//
//		this->portName = xmlPuertoSerie->txt;
//
//	}

    if(this->portName == "" || this->bautRate == 0){
        cout << "Error parametros" << endl;
		return false;
    }

	this->portHandle = open(this->portName.c_str(), O_RDWR | O_NOCTTY | O_NDELAY);

	if (this->portHandle == -1){ //Opening of port failed
		//Error Apertura puerto
        cout << "Error Open " << this->portName.c_str() << endl;
		return false;
	}

//
//	//Set the new options for the port...
//	tcsetattr(this->portHandle, TCSANOW, &this->options);

	if(this->portConfigurated == false){
		if(this->configPort() == false){
            cout << "Error Config" << endl;
			return false;
		}
	}

	//flush serial port buffers
	//this->portHandle

	return true;
}

/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/


void SerialPort::closePort(){

	close(this->portHandle);

}

/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/


bool SerialPort::flushPort() {

	if ( tcflush(this->portHandle,TCIOFLUSH) == -1 ){
		cout << "IMU Flush Failed" << endl;
		return false;
	}
	return true;

}

/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/

int SerialPort::receiveFromPort(unsigned char* bytes, int bytesToRead,int timeOut) {

	fd_set set;
	struct timeval timeout;
	int r = 0;
	int bytesCount = 0;
	int intentos = 0;
	bool continuar = true;

	while((bytesCount != bytesToRead) && continuar){

		/* Initialize the file descriptor set. */
		FD_ZERO (&set);

		FD_SET (this->portHandle, &set);

		/* Initialize the timeout data structure. */
		if(timeOut < 30){
			timeout.tv_sec = timeOut;
			timeout.tv_usec = 0;
		}
		else{
			timeout.tv_sec = 0;
			timeout.tv_usec = timeOut;
		}

		 //Se espera hasta que se produsca la señal de buffer listo para leer o time out terminado
		if((r = select (FD_SETSIZE,&set, NULL, NULL,&timeout))){
			bytesCount += read(this->portHandle, bytes + bytesCount, bytesToRead - bytesCount);
		}else{
			intentos++;
			if(intentos > 1){
				continuar = false;
			}
		}
	}

	return bytesCount;
}

/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/


int SerialPort::sendToPort(unsigned char* bytes, int bytesToWrite) {

	return write(this->portHandle, bytes, bytesToWrite);

}


/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/


int SerialPort::sendToPort(char* msg) {
	//this->portHandle
	return write(this->portHandle, msg, strlen(msg));

}


/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/


int SerialPort::sendToPort(unsigned char byte) {
	//this->portHandle
	return write(this->portHandle, &byte, 1);

}

/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/

SerialPort& SerialPort::operator<<(char* str){
	//this->portHandle
	this->sendToPort(str);

	return *this;
}


/************************.**********************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/

bool SerialPort::waitChar( unsigned char cCh){

	unsigned char cRCh = 0x00;
	bool continuar = true;
	bool resultado = false;
	int reintentos = 0;

	do{
		if ( this->receiveFromPort(&cRCh, 1) ){
			if( cRCh == cCh){
				resultado = true;
				continuar = false;
				cout << "Llego " << hex << (int)cCh << endl;
			}else{
				cout << hex << (int)cRCh << " != " << (int)cCh << endl;
			}
		}

		reintentos++;
		if(reintentos > 10){
			continuar = false;
			cout << "Maximo reintentos ACK " << endl;
		}
	}while(continuar);
//
//	this->receiveFromPort(&cRCh, 1);
//
//	resultado = true;

	return resultado;
}


/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/

void SerialPort::delay(int segundos){
	time_t t0 = time(NULL);
	while((time(NULL) - t0) != segundos);
}



/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/

int SerialPort::receivePacketFromPort(unsigned char* bytes, int bytesToRead,int timeOut) {

	fd_set set;
	struct timeval timeout;
	int r = 0;
	int bytesCount = 0;

	while(bytesCount != bytesToRead){

		/* Initialize the file descriptor set. */
		FD_ZERO (&set);
		FD_SET (this->portHandle, &set);

		/* Initialize the timeout data structure. */
		if(timeOut < 30){
			timeout.tv_sec = timeOut;
			timeout.tv_usec = 0;
		}
		else{
			timeout.tv_sec = 0;
			timeout.tv_usec = timeOut;
		}

		if(!(r = select (FD_SETSIZE,&set, NULL, NULL,&timeout))){ //Se espera hasta que se produzca la señal de buffer listo para leer o time out terminado
			return 0;
		}else{
			if(r == -1)
				return 0;
			else{
				bytesCount += read(this->portHandle, bytes + bytesCount, bytesToRead - bytesCount);
//				cout << "bytesCount:" << bytesCount << " bytesToRead: " << bytesToRead<< endl;
			}
		}
	}

	return bytesCount;
}


/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/

//int SerialPort::reciveMessageFromLG(unsigned char* bytes, int bytesToRead) {
//
//	//this->portHandle
//
//	fd_set set;
//	struct timeval timeout;
//	int ret;
//	int bytesRead = 0;
//	int bytesReadHeader = 0;
//	int bytesReadData = 0;
//	int bytesReadFooter = 0;
//	unsigned char buffer[MSG_LG_BUFFER_SIZE];
//	int index = 0;
//
//	FD_ZERO(&set);
//	FD_SET (this->portHandle, &set);
//
//	timeout.tv_sec = WAIT_TIMEOUT;
//	timeout.tv_usec = 0;
//
//	memset(bytes,0x00,bytesToRead);
//
//	ret=select (FD_SETSIZE,&set, NULL, NULL,&timeout);
//
//	//leo encabezado del comando
//	if (ret == 1) {
//		bytesReadHeader = this->receivePacketFromPort(buffer, MSG_LG_HEADER_LEN);
//
//		cout << endl << endl;
//		for(int i = 0; i < bytesReadHeader; i++){
//			cout << setbase(16) << noshowbase << setw(2) << setfill('0') << (int)buffer[i];
//		}
//		cout << endl << endl;
//
//		if(bytesReadHeader == MSG_LG_HEADER_LEN){
//			if(buffer[0] == STX){
//				memcpy(bytes + index, buffer, bytesReadHeader);
//				index += bytesReadHeader;
//				unsigned int lenData = buffer[ 5 ] * 256 + buffer[ 4 ];
//				cout << setbase(10) << "lenData:" << lenData << endl;
//
//				if(lenData){
//
//					bool continuar =  true;
//					int intentos = 0;
//					do{
//						ret=select (FD_SETSIZE,&set, NULL, NULL,&timeout);
//
//						if (ret == 1) {
//								bytesReadData += this->receivePacketFromPort(buffer + bytesReadData, lenData - bytesReadData);
//
//								cout << endl << endl;
//								for(int i = 0; i < bytesReadData; i++){
//									cout <<setbase(16) << noshowbase << setw(2) << setfill('0') << (int)buffer[i];
//								}
//								cout << endl << endl;
//						}
//
//						if(bytesReadData == lenData)
//							continuar = false;
//
//						intentos++;
//						if(intentos >5)
//							continuar = false;
//					}while(continuar);
//
//					if(bytesReadData == lenData){
//						memcpy(bytes + index, buffer, bytesReadData);
//						index += bytesReadData;
//					}else{
//						cout << "Error - Tamaño Data del comando" << endl;
//					}
//				}
//
//				ret=select (FD_SETSIZE,&set, NULL, NULL,&timeout);
//
//				if (ret == 1) {
//					bytesReadFooter = this->receivePacketFromPort(buffer, MSG_LG_FOOTER_LEN);
//
//					cout << endl << endl;
//					for(int i = 0; i < bytesReadFooter; i++){
//						cout <<setbase(16) << noshowbase << setw(2) << setfill('0') << (int)buffer[i];
//					}
//					cout << endl << endl;
//
//					if(bytesReadFooter == MSG_LG_FOOTER_LEN){
//						if(buffer[2] == ETX){
//							memcpy(bytes + index, buffer, bytesReadHeader);
//							bytesRead += bytesReadHeader +  bytesReadData + bytesReadFooter;
//						}else{
//							cout << "Error - No se encontro el ETX" << endl;
//						}
//					}else{
//						cout << "Error - Tamaño footer" << endl;
//					}
//				}else{
//					cout << "Error - Lectura footer" << endl;
//				}
//			}else{
//				cout << "Error - No se encontro el STX" << endl;
//			}
//		}else{
//			cout << "Error - Respuesta menor al tamaño del header" << endl;
//		}
//	}else{
//		cout << "Error - No se recivio respuesta del LG" << endl;
//	}
//
//	return bytesRead;
//
//	//leo header del mensaje
////			bytesRead = read(this->portHandle, buffer, MSG_LG_HEADER_LEN);
////		if((bytesRead == MSG_LG_HEADER_LEN) & (buffer[0] == STX)) {// STX
////
////			unsigned int len = buffer[ 5 ] * 256 + buffer[ 4 ];
////
////			memcpy(bytes + index,buffer,MSG_LG_HEADER_LEN);
////			index += MSG_LG_HEADER_LEN;
////
////			if(len){ // si no es 0, tengo campos de data, los recibo
////				unsigned int i = 0;
////				do{
////					FD_ZERO(&set);
////					FD_SET (this->portHandle, &set);
////
////					ret=select (FD_SETSIZE,&set, NULL, NULL,&timeout);
////
////					if (ret==1) {
////						i += read(this->portHandle, &c,1 );
////						memcpy(bytes + index, &c, 1);
////						index ++;
////					}else{
////						cout << "Error - Data recive" << endl;
////						return 0;
////					}
////
////				}
////				while(!(len == i));
////			}
////
////			FD_ZERO(&set);
////			FD_SET (this->portHandle, &set);
////
////			ret=select (FD_SETSIZE,&set, NULL, NULL,&timeout);
////
////			if (ret==1) {
////				//leo footer del mensaje
////				read(this->portHandle, buffer, MSG_LG_FOOTER_LEN);
////				memcpy(bytes + index,buffer,MSG_LG_FOOTER_LEN);
////				index += MSG_LG_FOOTER_LEN;
////
////			}else{
////				cout << "Error - Se lectura footer" << endl;
////				return 0;
////			}
////
////			return index;
////
////		}else{
////			cout << "Error - NO llego STX" << endl;
////			cout << "bytesRead: " << bytesRead << endl;
////			cout << "Receive: "<<setbase(16) << noshowbase << setw(2) << setfill('0') << (int)buffer[0];
////			return 0;
////		}
////	}
////	else{
////		cout << "Error - Se sale por timeout" << endl;
////		return 0;
////	}
//}
//end linux

#else // windows


#include "rs232.h"

/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/

SerialPort::SerialPort() {

    this->portOpen = false;
    //if(this->openPort())
        //this->closePort();
}

/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/


SerialPort::~SerialPort() {

    this->closePort();

}

/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/


bool SerialPort::openPort(){

    if(!this->portOpen){
        this->portNumber = 2;        /* (COM3 on windows) */
        this->bdrate = 115200;       /* baud rate */


        if(OpenComport(this->portNumber, this->bdrate))
        {
            cout << "Error - No se puedo abrir el puerto serie" << endl;
            this->portOpen = false;
            return this->portOpen;
        }

        this->portOpen = true;
        return this->portOpen;
    }else
        return this->portOpen;
}

/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/


void SerialPort::closePort(){

    if(this->portOpen){
        CloseComport(this->portNumber);
        this->portOpen = false;
    }

}

/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/


bool SerialPort::flushPort() {
    /*
	if ( tcflush(this->portHandle,TCIOFLUSH) == -1 ){
	//cout << "IMU Flush Failed" << endl;
		return false;
	}

    */
	return true;

}

/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/

int SerialPort::receiveFromPort(unsigned char* bytes, int bytesToRead) {

    return  PollComport(this->portNumber, bytes, bytesToRead);

}

/**********************************************************************************************/
/**********************************************************************************************/


/**********************************************************************************************/
/**********************************************************************************************/

int SerialPort::receivePacketFromPort(unsigned char* bytes, int bytesToRead) {

    int bytesCount = 0;

    while(bytesCount != bytesToRead){
        bytesCount = receiveFromPort(bytes + bytesCount,bytesToRead);
	}

	return bytesCount;
}


/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/

int SerialPort::reciveMessageFromLG(unsigned char* bytes, int bytesToRead) {

	int bytesRead = 0;
	unsigned char buffer[10];
	unsigned char c;
	int index = 0;

    //leo header del mensaje
    bytesRead = receiveFromPort(buffer, MSG_LG_HEADER_LEN);

    if((bytesRead == MSG_LG_HEADER_LEN) & (buffer[0] == STX)) {// STX

        unsigned int len = buffer[ 5 ] * 256 + buffer[ 4 ];

        memcpy(bytes + index,buffer,MSG_LG_HEADER_LEN);
        index += MSG_LG_HEADER_LEN;

        if(len){ // si no es 0, tengo campos de data, los recivo
            unsigned int i = 0;
            do{
                i += receiveFromPort(&c,1);
                memcpy(bytes + index, &c, 1);
                index ++;
            }
            while(!(len == i));
        }

        receiveFromPort(buffer, MSG_LG_FOOTER_LEN);
        memcpy(bytes + index,buffer,MSG_LG_FOOTER_LEN);
        index += MSG_LG_FOOTER_LEN;

        return index;

    }else return 0;

	return 0;
}

/**********************************************************************************************/
/**********************************************************************************************/


int SerialPort::sendToPort(unsigned char* bytes, int bytesToWrite) {

    return SendBuf(this->portNumber,(unsigned char*)bytes,bytesToWrite);
}


/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/


int SerialPort::sendToPort(char* msg) {

    return this->sendToPort((unsigned char*)msg,strlen(msg) + 1);
}


/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/


int SerialPort::sendToPort(unsigned char byte) {

    return sendToPort(&byte,1);

}

/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/

SerialPort& SerialPort::operator<<(char* str){

    this->sendToPort(str);

    return *this;
}


/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/

bool SerialPort::waitChar( unsigned char cCh){

    unsigned char cRCh = 0x00;

    if ( this->receiveFromPort(&cRCh, 1) )
        return ( cRCh == cCh );

    return false;
}


/**********************************************************************************************/
/**********************************************************************************************/

/**********************************************************************************************/
/**********************************************************************************************/

void SerialPort::delay(int segundos){
    time_t t0 = time(NULL);
    while((time(NULL) - t0) != segundos);
}



/**********************************************************************************************/
/**********************************************************************************************/


#endif //end windows

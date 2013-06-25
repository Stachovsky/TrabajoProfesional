/** \file SerialPort.h */

/*
 * SerialPort.h
 *
 *  Created on: Jun 24, 2011
 *      Author: fsilva
 */
using namespace std;

#ifndef SERIALPORT_H_
#define SERIALPORT_H_

#include <iostream>
#include <fstream>
#include <fcntl.h>
#include <string.h>
#include <sys/time.h>
#include <iomanip>

#ifndef PLATAFORM_WINDOWS
	#include <termios.h> //linux
#else
	#include <windows.h> //windows
#endif

/*
 // Ejemplo uso:

  	SerialPort port;

	port.openPort();
	port.flushPort();

	for(unsigned int i=0; i<=255; i++){
		port.sendToPort(i);
		cout << hex<< (int)i << endl;
	}

	port.closePort();

	while(true){
		unsigned char c;
		if(port.receiveFromPort(&c, 1)){
			cout << hex<< (int)c << endl;
		}
	}

 * */


#define STX						0x02 /**< Start of text    */
#define ETX						0x03 /**< End of text      */
#define ACK 					0x06 /**< Acknowledge      */
#define NAK 					0x15 /**< Not acknowledge  */

#define 	MSG_LG_HEADER_LEN	6 /**< Largo en Bytes del header del comando recivido desde el LG  */
#define 	MSG_LG_FOOTER_LEN	3 /**< Largo en Bytes del footer del comando recivido desde el LG  */
#define 	MSG_LG_MIN_RSP_LEN	9 /**< Largo en Bytes del header del comando recivido desde el LG  */
#define 	MSG_LG_BUFFER_SIZE	297 /**< Largo en Bytes del header del comando recivido desde el LG  */


//#ifndef PLATAFORM_WINDOWS
//	#define		SERIAL_PORT_PATH	"/dev/ttyUSB0"			/**< Direccion del puerto Serie. El valor de un COM nativos seria  /dev/ttyS0*/
//#else
//	#define		SERIAL_PORT_PATH	"COM3"                  /**< Nombre del puerto serie usado por el LG*/
//#endif

#define WAIT_TIMEOUT					     15			/**< Tiempo maximo de espera de espera de una respuesta en segundos*/
#define ERR_TIMEOUT							-10			/**< Codigo de error: Timeout cumplido en recepcion*/
#define ERR_FILEDESCRIPTOR					-20			/**< Codigo de error: Problema en el filedescriptor del puero */

#define BUFFER_SIZE					297

/** \brief Clase para el manejo del puerto serie
 *
 */
class SerialPort {
private:
	int portHandle; /**< Manejador del puerto */
	struct termios options; /**<  Estructura de configuracion del puerto */
	string portName;
	int bautRate;
	bool configPort();
	bool portConfigurated;

public:
	/** \brief Construcor de la Clase
	 *
	 *	Aca se configura el puerto y se carga la struck options
	 */
	SerialPort();

	/** \brief Destructor de la Clase
	 *
	 */
	virtual ~SerialPort();

	/** \brief Metodo para abrir el puerto
	 */
	bool openPort();

	/** \brief Metodo para cerrar el puerto
	 *
	 */
	void closePort();

	/** \brief Metodo para limpiar el buffer del puerto
	 *
	 */
	bool flushPort();

	/** \brief Metodo para enviar un byte
	 *
	 * \param	 bytes		Byte a enviar
	 * \return 				Bytes enviados
	 */
	int sendToPort(unsigned char bytes);

	/** \brief Metodo par enviar un arreglo del chars al puerto
	 *
	 * \param	bytes			Arreglo de bytes a enviar
	 * \param 	bytesToWrite	Numero de Bytes a escribir
	 * \return	 				Bytes enviados
	 */
	int sendToPort(unsigned char* bytes, int bytesToWrite);

	/** \brief Metodos para enviar un string
	 *	\param 	bytes			Arreglo de chars a enviar
	 *	\return	 				Bytes enviados
	 */
	int sendToPort(char* bytes);

	/** \brief Metodo para leer desde el pueto
	 *
	 *	\param 	bytes			Arreglo de bytes donde se almacena lo leido
	 *	\param 	bytesToWrite	Maxima cantidad de bytes que se puede leer
	 *	\return	 				Bytes leidos
	 *
	 */
	int receiveFromPort(unsigned char* bytes, int bytesToWrite, int timeOut = WAIT_TIMEOUT); //poner  LG_RESPONSE_TIMEOUT

	/** \brief Metodo para esperar la respuesta
	 *
	 *	\param		cCh			Donde se almacena el byte de respuesta
	 *
	 *	\return 				True si hubo respuesta, false si no
	 *
	 */

	int receivePacketFromPort(unsigned char* bytes, int bytesToRead, int timeOut = WAIT_TIMEOUT);

	bool waitChar( unsigned char cCh);

	/** \brief Operador put
	 *
	 * Este operador se utiliza para enviar un string al puerto
	 *
	 * \param		str		String a enviar por el puerto
	 * \return 				Se retorna una referencia al puerto serie
	 *
	 */
	SerialPort& operator<<(char* str);

	/** \brief Funcion para generar un delay de n segundos
	 *
	 * \param		str		Segundos a esperar
	 *
	 */
	void delay(int segundos);

	/** \brief
	 *
	 * @param pn
	 */
	void setPortName(string pn){ this->portName = pn; }

	/** \brief
	 *
	 * @param br
	 */
	void setBaudRate(int br){ this->bautRate = br; }

};

#endif /* SERIALPORT_H_ */

/* \file Crypto3Des.h */

#ifndef CRYPTO3DES_H_
#define CRYPTO3DES_H_

#include <iostream>
#include <string>
#include <sstream>

#include "des.h"
#include "base64.h"

using namespace std;

/** \brief Clase que implementa el algotirmo de ecriptacion triple des
 * Ej:
* 	\code
*		Crypto3Des des;
*		long long iv = 1319569370570;
*		string key = "3ihe1h782h1d3fzij43ysdf8";
*		string data = "Hola";
*
*		string encrip = des.encriptar(key,iv,data);
*		cout << "E: " << encrip << endl;
*
*		string decrip = des.desencriptar(key,iv,encrip);
*		cout << "D: " << decrip << endl;
*	\encode
*
 */

class Crypto3Des {
public:
	/** \brief Constructor de la clase
	 *
	 */
	Crypto3Des();

	/** \brief Destructor de la clase
	 *
	 */
	virtual ~Crypto3Des();

	/** \brief Método para encriptar usando el algoritmo triple Des
	*	Se utiliza el padding ISO10126, ya que se requiere que la informacion a encriptar
	*	tenga una longitud multiplo de 8 bytes. El padding ISO10126 consiste en agregar valores
	*	aleatorios a la data hasta lograr una longitud multiplo de 8, el ultimo valor agregado
	*	no es aleatorio, sino es el numero de caracteres de padding agregados. El padding es resuelto
	*	por el metodo.
	*	\param	key		Clave para la encripcion de 168 bits
	*	\param	iv		Vector de encripcion
	*	\param	data	Informacion a encriptar
	*	\return			Informacion encriptada codificada en base64
	*
	*/
	string encriptar(string key, long long iv, string data);

	/** \brief Método para desencriptar usando el algoritmo triple Des
	*	Se utiliza el padding ISO10126, ya que se requiere que la informacion a encriptar
	*	tenga una longitud multiplo de 8 bytes. El padding ISO10126 consiste en agregar valores
	*	aleatorios a la data hasta lograr una longitud multiplo de 8, el ultimo valor agregado
	*	no es aleatorio, sino es el numero de caracteres de padding agregados. El padding es resuelto
	*	por el metodo.
	*	\param	key		Clave para la desencripcion de 168 bits
	*	\param	iv		Vector de desencripcion
	*	\param	data	Informacion a desencriptar codificada en base64
	*	\return			Informacion desencriptada
	*
	*/
	string desencriptar(string key, long long iv, string data);
};

#endif /* CRYPTO3DES_H_ */

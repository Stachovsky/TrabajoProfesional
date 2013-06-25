/* \file Crypto3Des.cpp */

#include "Crypto3Des.h"

Crypto3Des::Crypto3Des() {

}

Crypto3Des::~Crypto3Des() {

}

string Crypto3Des::encriptar(string key, long long iv, string data){

	char auxStr[100];
	memset(auxStr,0x00,100);
	char rStr[100];
	memset(rStr,0x00,100);

    int sizeSS;

    if(data.length() % 8){
        sizeSS = data.length() + (8 - (data.length() % 8));
    }
    else{
        sizeSS = data.length();
    }

    long long ivTemp = iv;
	unsigned char* v_iv = (unsigned char*)&ivTemp;

    stringstream ss;
	ss.width(sizeSS);
    ss.fill(sizeSS - data.length());

	ss << left << data;
    des3_context context;
	des3_set3key_enc( &context, (unsigned char*)key.c_str());

    des3_crypt_cbc( &context, DES_ENCRYPT, ss.str().length(), v_iv,(unsigned char*)ss.str().c_str(),(unsigned char*)auxStr);
	b64_encode(auxStr, rStr);

	return rStr;
}

string Crypto3Des::desencriptar(string key, long long iv, string data){

	char auxStr[100];
	memset(auxStr,0x00,100);
	char rStr[100];
	memset(rStr,0x00,100);
	string strTemp = "";

	long long ivTemp = iv;
	unsigned char* v_iv = (unsigned char*)&ivTemp;

	b64_decode((char*)data.c_str(), auxStr); // decodifico
	strTemp = auxStr;

	int sizeSS;

        if(strTemp.length() % 8){
            sizeSS = strTemp.length() + (8 - (strTemp.length() % 8));
        }
        else{
            sizeSS = strTemp.length();
        }

	stringstream ss;
	ss.width(sizeSS);
        ss.fill(sizeSS - strTemp.length() - 1);

	ss << left << strTemp;

	des3_context context;
	des3_set3key_dec( &context, (unsigned char*)key.c_str());

	des3_crypt_cbc( &context, DES_DECRYPT, ss.str().length(), v_iv,(unsigned char*)ss.str().c_str(),(unsigned char*)rStr);

	rStr[strlen(rStr) - rStr[strlen(rStr) - 1]] = '\0'; // se elimina el padding

	return rStr;
}

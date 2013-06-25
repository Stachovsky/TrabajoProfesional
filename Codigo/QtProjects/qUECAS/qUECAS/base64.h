#include <stdio.h>
#include <string.h>

/* decodeblock - decode 4 '6-bit' characters into 3 8-bit binary bytes */
void decodeblock(unsigned char in[], char *clrstr);

int b64_decode(char *b64src, char *clrdst);

/* encodeblock - encode 3 8-bit binary bytes as 4 '6-bit' characters */
void encodeblock( unsigned char in[], char b64str[], int len );

/* encode - base64 encode a stream, adding padding if needed */
void b64_encode(char *clrstr, char *b64dst);

#include <stdio.h>

int encode_base64( char *bufin, int len, char *bufout )
{
	static unsigned char base64[] = 
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
	unsigned char *pin  = (unsigned char*)bufin;
	unsigned char *pout = (unsigned char*)bufout;
	
	for ( int i=0; i<len-2; i += 3 ) {
		*pout++ = base64[ pin[0] >> 2 ];
		*pout++ = base64[ 0x3F & ((pin[0] << 4) | (pin[1] >> 4)) ];
		*pout++ = base64[ 0x3F & ((pin[1] << 2) | (pin[2] >> 6)) ];
		*pout++ = base64[ 0x3F & pin[2] ];
		pin += 3;
	}
	if ( len % 3 == 1 ) {
		*pout++ = base64[ pin[0] >> 2 ];
		*pout++ = base64[ 0x3F & (pin[0] << 4) ];
		*pout++ = '=';
		*pout++ = '=';
	} else if ( len % 3 == 2 ) {
		*pout++ = base64[ pin[0] >> 2 ];
		*pout++ = base64[ 0x3F & ((pin[0] << 4) | (pin[1] >> 4)) ];
		*pout++ = base64[ 0x3F & ( pin[1] << 2) ];
		*pout++ = '=';
	}
	*pout = '\0';
	return pout - (unsigned char*)bufout;
}

int main( void )
{
	char in[] = "ABC";
	char out[sizeof(in)*2+1];
	
	int size = encode_base64( in, sizeof(in)-1, out );
	
	printf("in:  size:%d %s\n", sizeof(in)-1, in );
	printf("out: size:%d %s\n", size, out );
}

#include <stdio.h>
#include <string.h>

int decode_base64( char *bufin, int len, char *bufout )
{
	unsigned char *pin  = (unsigned char *)bufin;
	unsigned char *pout = (unsigned char *)bufout;
	static unsigned char base64[] = {
 		 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 
		 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 
		 0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0,62, 0, 0, 0,63,
		52,53,54,55,56,57,58,59,  60,61, 0, 0, 0, 0, 0, 0,	// = ‚Í 0 ˆµ‚¢
		 0, 0, 1, 2, 3, 4, 5, 6,   7, 8, 9,10,11,12,13,14,
		15,16,17,18,19,20,21,22,  23,24,25, 0, 0, 0, 0, 0,
		 0,26,27,28,29,30,31,32,  33,34,35,36,37,38,39,40,
		41,42,43,44,45,46,47,48,  49,50,51, 0, 0, 0, 0, 0,

		0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0,   0, 0, 0, 0, 0, 0, 0, 0, };
	
	for ( int i=0; i<len; i += 4 ) {
		*pout++ = (base64[pin[0]]<<2) | (base64[pin[1]]>>4);
		*pout++ = (base64[pin[1]]<<4) | (base64[pin[2]]>>2);
		*pout++ = (base64[pin[2]]<<6) | (base64[pin[3]]);
		pin += 4;
	}
	if ( len >= 4 ) {
		pin -= 4;
		if ( pin[3] == '=' ) pout--;
		if ( pin[2] == '=' ) pout--;
	}
	return pout - (unsigned char *)bufout;
}

void main( void )
{
	char in[] = "QUJD";
	char out[sizeof(in)] = {0};
	
	int size = decode_base64( in, sizeof(in)-1, out );
	
	printf("in:  size:%d %s\n", sizeof(in)-1, in );
	printf("out: size:%d %s\n", size, out );
}

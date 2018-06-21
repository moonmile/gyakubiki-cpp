#include <stdio.h>
#include <stdlib.h>

void main( void )
{
	char *str;
	int n;
	long l;
	double d;
	
	str = "100";
	printf( "atoiŠÖ” [%s] -> [%d]\n", str, atoi(str));
	str = "-100";
	printf( "atoiŠÖ” [%s] -> [%d]\n", str, atoi(str));
	str = "100ABC";
	printf( "atoiŠÖ” [%s] -> [%d]\n", str, atoi(str));
	str = "ABC";
	printf( "atoiŠÖ” [%s] -> [%d]\n", str, atoi(str));
	str = "   100";
	printf( "atoiŠÖ” [%s] -> [%d]\n", str, atoi(str));
	
	str = "100";
	printf( "atolŠÖ” [%s] -> [%ld]\n", str, atol(str));
	str = "-100";
	printf( "atolŠÖ” [%s] -> [%ld]\n", str, atol(str));

	str = "100";
	printf( "atofŠÖ” [%s] -> [%f]\n", str, atof(str));
	str = "-100";
	printf( "atofŠÖ” [%s] -> [%f]\n", str, atof(str));
	str = "100.123";
	printf( "atofŠÖ” [%s] -> [%f]\n", str, atof(str));
	str = "1.2345e4";
	printf( "atofŠÖ” [%s] -> [%f]\n", str, atof(str));
}

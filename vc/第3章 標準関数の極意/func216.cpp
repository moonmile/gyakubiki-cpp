#include <stdio.h>
#include <stdlib.h>

void main( void )
{
	char *str;
	int n;
	long l;
	double d;
	
	str = "100";
	printf( "atoi�֐� [%s] -> [%d]\n", str, atoi(str));
	str = "-100";
	printf( "atoi�֐� [%s] -> [%d]\n", str, atoi(str));
	str = "100ABC";
	printf( "atoi�֐� [%s] -> [%d]\n", str, atoi(str));
	str = "ABC";
	printf( "atoi�֐� [%s] -> [%d]\n", str, atoi(str));
	str = "   100";
	printf( "atoi�֐� [%s] -> [%d]\n", str, atoi(str));
	
	str = "100";
	printf( "atol�֐� [%s] -> [%ld]\n", str, atol(str));
	str = "-100";
	printf( "atol�֐� [%s] -> [%ld]\n", str, atol(str));

	str = "100";
	printf( "atof�֐� [%s] -> [%f]\n", str, atof(str));
	str = "-100";
	printf( "atof�֐� [%s] -> [%f]\n", str, atof(str));
	str = "100.123";
	printf( "atof�֐� [%s] -> [%f]\n", str, atof(str));
	str = "1.2345e4";
	printf( "atof�֐� [%s] -> [%f]\n", str, atof(str));
}

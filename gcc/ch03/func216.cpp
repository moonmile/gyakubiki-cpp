#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	char *str;
	int n;
	long l;
	double d;
	
	str = "100";
	printf( "atoi関数 [%s] -> [%d]\n", str, atoi(str));
	str = "-100";
	printf( "atoi関数 [%s] -> [%d]\n", str, atoi(str));
	str = "100ABC";
	printf( "atoi関数 [%s] -> [%d]\n", str, atoi(str));
	str = "ABC";
	printf( "atoi関数 [%s] -> [%d]\n", str, atoi(str));
	str = "   100";
	printf( "atoi関数 [%s] -> [%d]\n", str, atoi(str));
	
	str = "100";
	printf( "atol関数 [%s] -> [%ld]\n", str, atol(str));
	str = "-100";
	printf( "atol関数 [%s] -> [%ld]\n", str, atol(str));

	str = "100";
	printf( "atof関数 [%s] -> [%f]\n", str, atof(str));
	str = "-100";
	printf( "atof関数 [%s] -> [%f]\n", str, atof(str));
	str = "100.123";
	printf( "atof関数 [%s] -> [%f]\n", str, atof(str));
	str = "1.2345e4";
	printf( "atof関数 [%s] -> [%f]\n", str, atof(str));
}

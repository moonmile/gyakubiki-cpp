#include <stdio.h>
#pragma pack(1)

struct S
{
	int i;
	short sh;
	double d;
};
int main( void )
{
	printf( "sizeof S: %d\n", sizeof(S));
}

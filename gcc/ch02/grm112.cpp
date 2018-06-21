#include <stdio.h>
#define LANG(_x)	LANG_##_x

enum {
	LANG_C = 0,
	LANG_CPP,
	LANG_JAVA
};

int main( void )
{
	printf( "lang: %d\n", LANG( CPP ));
}

#include <stdio.h>

#define DEBUG

#define LANG_C 		1
#define LANG_CPP	2
#define LANG_JAVA	3

int main( void )
{
#ifdef DEBUG
	printf("debug message\n");
#endif

	printf("langage c++: %d\n", LANG_CPP );
}

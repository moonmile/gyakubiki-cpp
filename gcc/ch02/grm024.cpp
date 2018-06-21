#include <stdio.h>

int main( void )
{
	char *lang[] = { "C", "C++", "Java", "C#", NULL };
	
	for ( char **p = lang; *p != NULL; p++ ) {
		printf("[%s]\n", *p );
	}
}

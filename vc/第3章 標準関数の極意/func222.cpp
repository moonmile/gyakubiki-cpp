#include <stdio.h>
#include <string.h>

void main( void )
{
	char str[] = "If you look 20 foot, how meny is it bards and cats ?";
	char *top, *p;
	
	top = str;
	while ((p = strpbrk( top, "abcdefg" )) != NULL ) {
		printf("[%c] �̈ʒu�� %d �Ԗڂł�\n", *p, p-str+1 );
		top = p+1;
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main( void )
{
	char src[] = "Hello world";
	char dest[100];
	char *p;
	
	memset( dest, 0, sizeof dest );
	/* �擪����T�o�C�g�R�s�[���܂� */
	p = (char*)memcpy( dest, src, 5 );
	printf("5 �o�C�g�R�s�[: [%s]\n", dest );
	
	memset( dest, 0, sizeof dest );
	/* �擪����O�o�C�g�R�s�[���܂� */
	p = (char*)memcpy( dest, src, 0 );
	printf("0 �o�C�g�R�s�[: [%s]\n", dest );
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void )
{
	char *dst;
	
	dst = strdup("Hello world");
	if ( dst == NULL ) {
		printf( "�������m�ۂɎ��s���܂���\n");
		return 0;
	}
	printf("�R�s�[����������: [%s]\n", dst );
	free( dst );
	
	char src[] = "Hello world.";
	dst = new char[strlen(src)];
	strcpy( dst, src );
	
	
	return 1;
}

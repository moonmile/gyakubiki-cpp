#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	char *mem;

	mem = (char*)malloc( 100 );
	if ( mem == NULL ) {
		printf("���������s�����Ă��܂�\n");
		return 0;
	}
	printf("������ [%p] ��������܂���\n", mem );
	free( mem );
	return 1;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void )
{
	char *mem;
	
	if ( (mem = (char*)malloc( 100 )) == NULL ) {
		printf("���������s�����Ă��܂�\n");
		return 0;
	}
	memset( mem, 0, 100 );
	memset( mem, 'A', 10 );		/* �擪�P�O�o�C�g�� 'A' �Ŗ��߂� */
	printf("100 �o�C�g���蓖�Ă�: [%p]\n", mem );
	printf("�擪�P�O�o�C�g: [%s]\n", mem );
	
	if ((mem = (char*)realloc( mem, 200 )) == NULL ) {
		printf("���������s�����Ă��܂�\n");
		return 0;
	}
	/* �ʒu���ύX����Ă��ŏ��̓��e��ێ����Ă��� */
	printf("200 �o�C�g�Ɋg������: [%p]\n", mem );
	printf("�擪�P�O�o�C�g: [%s]\n", mem );
	
	if ((mem = (char*)realloc( mem, 50 )) == NULL ) {
		printf("���������s�����Ă��܂�\n");
		return 0;
	}
	printf("50 �o�C�g�ɏk������: [%p]\n", mem );

	if ((mem = (char*)realloc( mem, 0 )) == NULL ) {
		printf("���������s�����Ă��܂�\n");
		return 0;
	}
	printf("0 �o�C�g�ɂ���: [%p]\n", mem );

	free( mem );
	return 1;
}

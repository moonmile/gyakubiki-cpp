#include <stdio.h>
#include <string.h>

void main( void )
{
	char str[100];
	char *top, *p;
	strcpy(str, "100, 200, abc, efg, 1, END\n");
	
	/* �ŏ��̃g�[�N���̌Ăяo�� */
	p = strtok( str, " ,\n" );
	while ( p != NULL ) {
		printf( "������: [%s]\n", p );
		/* ���̃g�[�N����T�� */
		p = strtok( NULL, " ,\n" );
	}
}

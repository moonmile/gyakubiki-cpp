#include <stdio.h>
#include <string.h>

void main( void )
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	char *p;
	
	p = strchr( str, 'h' );
	if ( p == NULL ) {
		printf("���� 'h' ��������܂���ł���\n");
	} else {
		printf("���� 'h' �� %d �Ԗڂɂ���܂�\n", p-str+1);
	}
	
	p = strchr( str, 'H' );
	if ( p == NULL ) {
		printf("���� 'H' ��������܂���ł���\n");
	} else {
		printf("���� 'H' �� %d �Ԗڂɂ���܂�\n", p-str+1);
	}
}

#include <stdio.h>
#include <string.h>

void main( void )
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	char *p;
	
	p = strstr( str, "fgh" );
	if ( p == NULL ) {
		printf("������ 'fgh' ��������܂���ł���\n");
	} else {
		printf("������ 'fgh' �� %d �Ԗڂɂ���܂�\n", p-str+1);
	}

	p = strstr( str, "FGH" );
	if ( p == NULL ) {
		printf("������ 'FGH' ��������܂���ł���\n");
	} else {
		printf("������ 'FHI' �� %d �Ԗڂɂ���܂�\n", p-str+1);
	}
}

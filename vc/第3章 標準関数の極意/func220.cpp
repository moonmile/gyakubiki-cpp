#include <stdio.h>
#include <string.h>

void main( void )
{
	char str[] = "ABCDEFGabcdefgABCDEFG";
	char *p;
	
	p = strrchr( str, 'C' );
	if ( p == NULL ) {
		printf("���� 'C' �͌�����܂���ł���\n");
	} else {
		printf("���� 'C' �� %d �Ԗڂɂ���܂�\n", p - str + 1 );
	}
	
	p = strrchr( str, 'c' );
	if ( p == NULL ) {
		printf("���� 'c' �͌�����܂���ł���\n");
	} else {
		printf("���� 'c' �� %d �Ԗڂɂ���܂�\n", p - str + 1 );
	}

	p = strrchr( str, 'x' );
	if ( p == NULL ) {
		printf("���� 'x' �͌�����܂���ł���\n");
	} else {
		printf("���� 'x' �� %d �Ԗڂɂ���܂�\n", p - str + 1 );
	}
}

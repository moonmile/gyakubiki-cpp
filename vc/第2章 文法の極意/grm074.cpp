#include <stdio.h>

void main( void )
{
	int i;

	for ( i=0; i<10; i++ ) {
		// �T�̂Ƃ��Ƀ��[�v����߂�
		if ( i == 5 ) break;
		printf( "[%d],", i );
	}
	printf( "\n" );
}

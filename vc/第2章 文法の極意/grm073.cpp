#include <stdio.h>

void main( void )
{
	int i;

	for ( i=0; i<10; i++ ) {
		// �����̏ꍇ�͈ȉ��̏������΂�
		if ( i % 2 == 0 ) continue;
		printf( "[%d],", i );
	}
	printf( "\n" );
}

#include <stdio.h>

void main( void )
{
	int i;

	// �P������
	for ( i=0; i<10; i++ ) {
		printf("%d,", i );
	}
	printf("\n");
	
	// �P������
	for ( i=10; i>0; i-- ) {
		printf( "%d,", i );
	}
	printf("\n");
	
	// �Q������
	for ( i=0; i<10; i += 2 ) {
		printf( "%d,", i );
	}
	printf("\n");
}

#include <stdio.h>

int main( void )
{
	int i;

	// １つずつ増加
	for ( i=0; i<10; i++ ) {
		printf("%d,", i );
	}
	printf("\n");
	
	// １つずつ減少
	for ( i=10; i>0; i-- ) {
		printf( "%d,", i );
	}
	printf("\n");
	
	// ２つずつ増加
	for ( i=0; i<10; i += 2 ) {
		printf( "%d,", i );
	}
	printf("\n");
}

#include <stdio.h>

// �Q�Ƃ𗘗p
void calc( int x, int &y )
{
	y += x;
}
// �|�C���^�𗘗p
void calc( int x, int *p )
{
	*p += x;
}
void main( void )
{
	int x, y, i;
	
	// �Q�ƃo�[�W����
	x = y = 1;
	for ( i=0; i<10; i++ ) {
		calc( x, y );
		printf( "%d,", y );
		x = y;
	}
	printf( "\n" );
	
	// �|�C���^�o�[�W����
	x = y = 1;
	for ( i=0; i<10; i++ ) {
		calc( x, &y );
		printf( "%d,", y );
		x = y;
	}
	printf( "\n" );
}

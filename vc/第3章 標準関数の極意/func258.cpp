#include <stdio.h>
#include <time.h>
#include <math.h>
#ifdef _MSC_VER
#include <windows.h>
#endif
void main( void )
{
	time_t tt0, tt1;
	
	time( &tt0 );
#ifdef _MSC_VER
	Sleep( 10000 );
#else
	sleep( 10 );
#endif
	time( &tt1 );
	
	printf( "�J�n����: %s", ctime( &tt0 ));
	printf( "�I������: %s", ctime( &tt1 ));
	printf( "�o�ߕb��: %f", difftime( tt1, tt0 ));
}

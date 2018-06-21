#include <stdio.h>
#include <time.h>
#include <math.h>
#ifdef _MSC_VER
#include <windows.h>
#endif
#include <unistd.h>

int main( void )
{
	time_t tt0, tt1;
	
	time( &tt0 );
#ifdef _MSC_VER
	Sleep( 10000 );
#else
	sleep( 10 );
#endif
	time( &tt1 );
	
	printf( "開始時刻: %s", ctime( &tt0 ));
	printf( "終了時刻: %s", ctime( &tt1 ));
	printf( "経過秒数: %f\n", difftime( tt1, tt0 ));
}

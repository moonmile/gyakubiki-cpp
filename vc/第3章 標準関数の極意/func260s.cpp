#include <stdio.h>
#include <time.h>

void main( void )
{
	struct tm t;
	time_t tt;
	
	/* 現在時刻を表示する */
	time( &tt );
	localtime_s( &t, &tt );
	printf( "現地時刻:   %s", asctime( &t ));
	gmtime_s( &t, &tt );
	printf( "世界標準時: %s", asctime( &t ));
}

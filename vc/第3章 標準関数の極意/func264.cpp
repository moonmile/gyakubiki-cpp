#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main( void )
{
	struct tm *t;
	time_t tt;
	
	time( &tt );
	t = localtime( &tt );
	printf( "現在時刻: %s", asctime( t ));
	
	/* ドイツの標準時に設定 */
	_putenv( "TZ=GST-1GDT" );
	_tzset();
	t = localtime( &tt );
	printf( "現在時刻: %s", asctime( t ));
	/* 日本の標準時に設定 */
	_putenv( "TZ=JMT-9" );
	_tzset();
	t = localtime( &tt );
	printf( "現在時刻: %s", asctime( t ));
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void )
{
	struct tm *t;
	time_t tt;
	
	time( &tt );
	t = localtime( &tt );
	printf( "現在時刻: %s", asctime( t ));
	
	/* ドイツの標準時に設定 */
	putenv( "TZ=GST-1GDT" );
	tzset();
	t = localtime( &tt );
	printf( "現在時刻: %s", asctime( t ));
	/* 日本の標準時に設定 */
	putenv( "TZ=JMT-9" );
	tzset();
	t = localtime( &tt );
	printf( "現在時刻: %s", asctime( t ));
}

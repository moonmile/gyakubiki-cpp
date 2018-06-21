#include <stdio.h>
#include <time.h>

int main( void )
{
	struct tm *t;
	time_t tt;
	
	/* 現在時刻を表示する */
	time( &tt );
	t = localtime( &tt );
	printf( "現地時刻:   %s", asctime( t ));
	t = gmtime( &tt );
	printf( "世界標準時: %s", asctime( t ));
}

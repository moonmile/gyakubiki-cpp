#include <stdio.h>
#include <time.h>

void main( void )
{
	struct tm *t;
	time_t tt;
	
	/* 現在時刻を表示する */
	time( &tt );
	t = localtime( &tt );
	printf( "現在時刻: %s", asctime( t ));
}

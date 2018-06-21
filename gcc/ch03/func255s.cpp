#include <stdio.h>
#include <time.h>

int main( void )
{
	struct tm *t;
	time_t tt;
	
	/* 現在時刻を表示する */
	time( &tt );
	t = localtime( &tt );
	char buf[100];
	asctime_s( buf, sizeof buf, t );
	printf( "現在時刻: %s", buf );
}

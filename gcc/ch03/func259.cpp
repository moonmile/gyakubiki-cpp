#include <stdio.h>
#include <time.h>

int main( void )
{
	struct tm *t;
	time_t tt;
	
	/* 現在時刻を表示する */
	time( &tt );
	t = gmtime( &tt );
	printf( "世界標準時: %s", asctime( t ));
	
	printf( "%04d/%02d/%02d %02d:%02d:%02d\n",
		1900 + t->tm_year, t->tm_mon + 1, t->tm_mday, 
		t->tm_hour, t->tm_min, t->tm_sec );
}

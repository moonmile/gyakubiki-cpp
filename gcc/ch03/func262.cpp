#include <stdio.h>
#include <time.h>

int main( void )
{
	struct tm *t;
	time_t tt;
	char buf[256];
	
	/* 現在時刻を表示する */
	time( &tt );
	t = localtime( &tt );

	strftime( buf, sizeof buf, "%c", t );
	printf( "ロケールに応じた書式: %s\n", buf );
	strftime( buf, sizeof buf, "%Y/%m/%d %H:%M:%S", t );
	printf( "標準書式: %s\n", buf );
	strftime( buf, sizeof buf, "%d %a %Y %H:%M:%S", t );
	printf( "曜日付き: %s\n", buf );
	strftime( buf, sizeof buf, "%d %a %Y %I:%M %p", t );
	printf( "12時間書式: %s\n", buf );
}

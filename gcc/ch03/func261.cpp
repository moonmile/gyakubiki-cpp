#include <stdio.h>
#include <time.h>

int main( void )
{
	struct tm *t;
	time_t tt;
	
	time( &tt );
	t = localtime( &tt );
	printf( "現地時刻:     %s", asctime( t ));
	printf( "経過秒: %d\n", tt );
	t->tm_hour = 0;
	t->tm_min  = 0;
	t->tm_sec  = 0;
	tt = mktime( t );
	printf( "経過秒: %d\n", tt );
	printf( "変更した時刻: %s\n", asctime( t ));
}

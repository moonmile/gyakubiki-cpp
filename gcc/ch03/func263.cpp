#include <stdio.h>
#include <time.h>

int main( void )
{
	struct tm *t;
	time_t tt;
	
	/* 現在時刻を表示する */
	time( &tt );
	t = localtime( &tt );
	printf( "現在時刻: %s", asctime( t ));

	tt = time( NULL );
	t = localtime( &tt );
	printf( "現在時刻: %s", asctime( t ));
}

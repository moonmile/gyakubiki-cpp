#include <stdio.h>
#include <time.h>

int main( void )
{
	time_t tt;
	
	/* 現在時刻を表示する */
	time( &tt );
	printf( "現在時刻: %s", ctime( &tt ));
}

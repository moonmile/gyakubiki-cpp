#include <stdio.h>
#include <time.h>

void main( void )
{
	struct tm t;
	time_t tt;
	
	/* Œ»İ‚ğ•\¦‚·‚é */
	time( &tt );
	gmtime_s( &t, &tt );
	printf( "¢ŠE•W€: %s", asctime( &t ));
	
	printf( "%04d/%02d/%02d %02d:%02d:%02d\n",
 		1900 + t.tm_year, t.tm_mon + 1, t.tm_mday, 
 		t.tm_hour, t.tm_min, t.tm_sec );
}

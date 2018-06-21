#include <stdio.h>
#include <time.h>

void main( void )
{
	time_t tt;
	
	/* Œ»İ‚ğ•\¦‚·‚é */
	time( &tt );
	char buf[100];
	ctime_s( buf, sizeof buf, &tt );
	printf( "Œ»İ: %s", buf );
}

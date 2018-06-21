#include <stdio.h>
#include <time.h>

void main( void )
{
	struct tm *t;
	time_t tt;
	
	/* Œ»İ‚ğ•\¦‚·‚é */
	time( &tt );
	t = localtime( &tt );
	printf( "Œ»İ: %s", asctime( t ));
}

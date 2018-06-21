#include <stdio.h>
#include <time.h>

void main( void )
{
	time_t tt;
	
	/* Œ»İ‚ğ•\¦‚·‚é */
	time( &tt );
	printf( "Œ»İ: %s", ctime( &tt ));
}

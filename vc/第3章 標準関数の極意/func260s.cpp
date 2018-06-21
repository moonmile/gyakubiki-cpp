#include <stdio.h>
#include <time.h>

void main( void )
{
	struct tm t;
	time_t tt;
	
	/* Œ»İ‚ğ•\¦‚·‚é */
	time( &tt );
	localtime_s( &t, &tt );
	printf( "Œ»’n:   %s", asctime( &t ));
	gmtime_s( &t, &tt );
	printf( "¢ŠE•W€: %s", asctime( &t ));
}

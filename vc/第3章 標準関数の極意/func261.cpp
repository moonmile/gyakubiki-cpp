#include <stdio.h>
#include <time.h>

void main( void )
{
	struct tm *t;
	time_t tt;
	
	time( &tt );
	t = localtime( &tt );
	printf( "���n����:     %s", asctime( t ));
	printf( "�o�ߕb: %d\n", tt );
	t->tm_hour = 0;
	t->tm_min  = 0;
	t->tm_sec  = 0;
	tt = mktime( t );
	printf( "�o�ߕb: %d\n", tt );
	printf( "�ύX��������: %s\n", asctime( t ));
}

#include <stdio.h>
#include <time.h>

void main( void )
{
	struct tm t;
	time_t tt;
	
	/* ���ݎ�����\������ */
	time( &tt );
	localtime_s( &t, &tt );
	printf( "���n����:   %s", asctime( &t ));
	gmtime_s( &t, &tt );
	printf( "���E�W����: %s", asctime( &t ));
}

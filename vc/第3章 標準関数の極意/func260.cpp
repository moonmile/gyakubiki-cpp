#include <stdio.h>
#include <time.h>

void main( void )
{
	struct tm *t;
	time_t tt;
	
	/* ���ݎ�����\������ */
	time( &tt );
	t = localtime( &tt );
	printf( "���n����:   %s", asctime( t ));
	t = gmtime( &tt );
	printf( "���E�W����: %s", asctime( t ));
}

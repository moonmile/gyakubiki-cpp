#include <stdio.h>
#include <time.h>

void main( void )
{
	struct tm *t;
	time_t tt;
	
	/* ���ݎ�����\������ */
	time( &tt );
	t = localtime( &tt );
	char buf[100];
	asctime_s( buf, sizeof buf, t );
	printf( "���ݎ���: %s", buf );
}

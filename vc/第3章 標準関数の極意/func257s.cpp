#include <stdio.h>
#include <time.h>

void main( void )
{
	time_t tt;
	
	/* ���ݎ�����\������ */
	time( &tt );
	char buf[100];
	ctime_s( buf, sizeof buf, &tt );
	printf( "���ݎ���: %s", buf );
}

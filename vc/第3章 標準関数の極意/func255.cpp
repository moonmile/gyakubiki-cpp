#include <stdio.h>
#include <time.h>

void main( void )
{
	struct tm *t;
	time_t tt;
	
	/* ���ݎ�����\������ */
	time( &tt );
	t = localtime( &tt );
	printf( "���ݎ���: %s", asctime( t ));
}

#include <stdio.h>
#include <time.h>

void main( void )
{
	time_t tt;
	
	/* ���ݎ�����\������ */
	time( &tt );
	printf( "���ݎ���: %s", ctime( &tt ));
}

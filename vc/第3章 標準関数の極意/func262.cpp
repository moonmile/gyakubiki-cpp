#include <stdio.h>
#include <time.h>

void main( void )
{
	struct tm *t;
	time_t tt;
	char buf[256];
	
	/* ���ݎ�����\������ */
	time( &tt );
	t = localtime( &tt );

	strftime( buf, sizeof buf, "%c", t );
	printf( "���P�[���ɉ���������: %s\n", buf );
	strftime( buf, sizeof buf, "%Y/%m/%d %H:%M:%S", t );
	printf( "�W������: %s\n", buf );
	strftime( buf, sizeof buf, "%d %a %Y %H:%M:%S", t );
	printf( "�j���t��: %s\n", buf );
	strftime( buf, sizeof buf, "%d %a %Y %I:%M %p", t );
	printf( "12���ԏ���: %s\n", buf );
}

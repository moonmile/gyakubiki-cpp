#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main( void )
{
	struct tm *t;
	time_t tt;
	
	time( &tt );
	t = localtime( &tt );
	printf( "���ݎ���: %s", asctime( t ));
	
	/* �h�C�c�̕W�����ɐݒ� */
	_putenv( "TZ=GST-1GDT" );
	_tzset();
	t = localtime( &tt );
	printf( "���ݎ���: %s", asctime( t ));
	/* ���{�̕W�����ɐݒ� */
	_putenv( "TZ=JMT-9" );
	_tzset();
	t = localtime( &tt );
	printf( "���ݎ���: %s", asctime( t ));
}

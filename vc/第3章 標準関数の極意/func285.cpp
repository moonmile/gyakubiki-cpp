#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void sigint( int n )
{
	puts( "pushed Ctrl+C !" );
	exit(0);
}

void main( void )
{
	char buf[256];

	signal( SIGINT, sigint );
	
	puts( "please push Ctrl+C" );
	while ( 1 ) {
		gets_s( buf, 256 );

		// �擪�� 'e' �̏ꍇ�� Ctrl+C �Ɠ��������ɂ���		
		if ( buf[0] == 'e' ) {
			raise( SIGINT );
		}
	}
}

#include <stdio.h>
#include <process.h>

void main( int argc, char *argv[] )
{
	char cmd[] = "notepad.exe";
	
	puts( "execlp test begin" );
	execlp( cmd, cmd, "func274.cpp", NULL );
	/* �����ɂ͖߂��Ă��Ȃ� */
	puts( "execlp test end" );
}

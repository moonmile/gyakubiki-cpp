#include <stdio.h>
#include <process.h>

void main( int argc, char *argv[] )
{
	char cmd[] = "notepad.exe";
	
	puts( "execlp test begin" );
	execlp( cmd, cmd, "func274.cpp", NULL );
	/* ここには戻ってこない */
	puts( "execlp test end" );
}

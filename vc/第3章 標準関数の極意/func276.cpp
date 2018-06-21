#include <stdio.h>
#include <process.h>

void main( int argc, char *argv[] )
{
	char cmd[] = "c:\\windows\\notepad.exe";
	
	puts( "spawnl test" );
	spawnl( _P_WAIT, cmd, cmd, "func276.cpp", NULL );
	puts( "spawnl test end" );
}

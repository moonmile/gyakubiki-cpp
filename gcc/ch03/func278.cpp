#include <stdio.h>
#include <process.h>

int main( int argc, char *argv[] )
{
	char cmd[] = "notepad.exe";
	
	puts( "spawnlp test begin" );
	spawnlp( _P_WAIT, cmd, cmd, "func278.cpp", NULL );
	puts( "spawnlp test end" );
}
 
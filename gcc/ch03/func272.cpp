#include <stdio.h>
#include <process.h>

int main( int argc, char *argv[] )
{
	char cmd[] = "c:\\windows\\notepad.exe";
	
	puts( "execl test begin" );
	execl( cmd, cmd, "func272.cpp", NULL );
	puts( "execl test end" );
}

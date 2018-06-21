#include <stdio.h>
#include <process.h>

int main( int argc, char *argv[] )
{
	char cmd[] = "c:\\windows\\notepad.exe";
	char *envp[] = {
		"temp=c:\temp",
		"username=masuda",
		NULL,
	};
	
	puts( "spawnle test begin" );
	spawnle( _P_WAIT, cmd, cmd, "func277.cpp", NULL, envp );
	puts( "spawnle test end" );
}
 
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
	
	puts( "execle test begin" );
	execle( cmd, cmd, "func273.cpp", NULL, envp );
	/* ここには戻ってこない */
	puts( "execle test end" );
}

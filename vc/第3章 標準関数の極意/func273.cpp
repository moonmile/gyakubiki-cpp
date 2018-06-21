#include <stdio.h>
#include <process.h>

void main( int argc, char *argv[] )
{
	char cmd[] = "c:\\windows\\notepad.exe";
	char *envp[] = {
		"temp=c:\temp",
		"username=masuda",
		NULL,
	};
	
	puts( "execle test begin" );
	execle( cmd, cmd, "func273.cpp", NULL, envp );
	/* ‚±‚±‚É‚Í–ß‚Á‚Ä‚±‚È‚¢ */
	puts( "execle test end" );
}

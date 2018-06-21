#include <stdio.h>
#include <errno.h>
#include <unistd.h>

int main( void )
{
	int ret;
	ret = access( "func206.cpp", 0 );
	if ( ret == 0 ) {
		printf( "ファイル情報を取得できました\n");
	} else {
		printf( "ファイル情報を取得できませんでした\n");
	}
}

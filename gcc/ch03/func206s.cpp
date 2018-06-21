#include <stdio.h>
#include <errno.h>
#ifndef _MSC_VER
#error "Cannot use this function in gcc"
#endif
#include <io.h>

int main( void )
{
	int ret;
	ret = _access_s( "func206s.cpp", 0 );
	if ( ret == 0 ) {
		printf( "ファイル情報を取得できました\n");
	} else {
		printf( "ファイル情報を取得できませんでした\n");
	}
}

#include <stdio.h>
#include <errno.h>
#ifndef _MSC_VER
#error "Cannot use this function in gcc"
#endif
#include <io.h>
#include <sys/stat.h>

int main( void )
{
	int ret;
	
	/* 書き込み許可を設定する */
	ret = _chmod( "func204.cpp", _S_IWRITE );
	if ( ret == 0 ) {
		printf("書き込み許可を設定しました\n");
	} else {
		printf("書き込み許可が設定できませんでした\n");
	}
	
	ret = _chmod( "sample_no_file.txt", _S_IWRITE );
	if ( ret == 0 ) {
		printf("書き込み許可を設定しました\n");
	} else {
		printf("書き込み許可が設定できませんでした\n");
	}
	return 1;
}

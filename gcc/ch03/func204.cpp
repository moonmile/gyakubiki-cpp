#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <sys/stat.h>

int main( void )
{
	int ret;
	
	/* 書き込み許可を設定する */
	ret = chmod( "func204.cpp", S_IWRITE );
	if ( ret == 0 ) {
		printf("書き込み許可を設定しました\n");
	} else {
		printf("書き込み許可が設定できませんでした\n");
	}
	
	ret = chmod( "sample_no_file.txt", S_IWRITE );
	if ( ret == 0 ) {
		printf("書き込み許可を設定しましたn");
	} else {
		printf("書き込み許可が設定できませんでした\n");
	}
	return 1;
}

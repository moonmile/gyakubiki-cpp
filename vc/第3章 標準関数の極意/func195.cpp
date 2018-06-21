#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#ifdef _MSC_VER
#include <direct.h>
#else
#include <unistd.h>
#endif

int main( void )
{
	char buffer[260];
	char *path;
	
	/* 格納領域（buffer）を指定する */
	path = getcwd( buffer, sizeof buffer );
	if ( path == NULL ) {
		printf("カレントディレクトリを取得できませんでした [%d]\n", errno );
	} else {
		printf("カレントディレクトリ: %s\n", path );
	}
	
	/* 格納領域（buffer）に NULL を指定する */
	path = getcwd( NULL, 260 );
	if ( path == NULL ) {
		printf("カレントディレクトリを取得できませんでした [%d]\n", errno );
	} else {
		printf("カレントディレクトリ: %s\n", path );
		free( path );
	}
	
	/* パスの最大値（maxlen）を小さくした場合 */
	path = getcwd( buffer, 10 );
	if ( path == NULL ) {
		printf("カレントディレクトリを取得できませんでした [%d]\n", errno );
	} else {
		printf("カレントディレクトリ: %s\n", path );
		free( path );
	}
	
	return 1;
}

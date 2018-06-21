#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>

int main( void )
{
	int ret;
	struct stat buf;
	
	ret = stat( "func205.cpp", &buf );
	if ( ret == 0 ) {
		printf( "ファイル情報を取得できました\n");
		
		printf( "最終アクセス時刻: %s", ctime( &buf.st_atime ));
		printf( "作成時刻:         %s", ctime( &buf.st_ctime ));
		printf( "最終更新時刻:     %s", ctime( &buf.st_mtime ));
		printf( "ファイルモード:   %X\n", buf.st_mode );
		printf( "st_nlink:         %d\n", buf.st_nlink );
		printf( "st_dev:           %d\n", buf.st_dev );
		printf( "st_rdev:          %d\n", buf.st_rdev );
		printf( "ファイルサイズ:   %d\n", buf.st_size );
	} else {
		printf( "ファイル情報を取得できませんでした\n");
	}

	return 1;
}

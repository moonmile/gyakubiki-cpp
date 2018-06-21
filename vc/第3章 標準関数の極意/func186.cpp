#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

int main( void )
{
	int fd;

	/* 書き込みモードでオープン */
	if ((fd = open( "sample.dat", O_CREAT | O_WRONLY, S_IWRITE )) == -1 ) {
		printf("'sample.dat' が書き込みモードでオープンできません\n");
		return 0;
	}
	
	/* 最初は正常にクローズできる */
	if ( close( fd ) == 0 ) {
		printf("正常にハンドルをクローズしました\n");
	} else {
		printf("クローズ時にエラーが発生しました [%d]\n", errno );
	}
	
	/* 既にクローズされたハンドルの場合はエラーが発生する */
	if ( close( fd ) == 0 ) {
		printf("正常にハンドルをクローズしました\n");
	} else {
		printf("クローズ時にエラーが発生しました [%d]\n", errno );
	}
	return 1;
}

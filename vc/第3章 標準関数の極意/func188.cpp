#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

int main( void )
{
	int fd, count;
	char ch, buff[50];
	
	/* 新しいファイルをオープン */
	if ((fd = open( "sample.dat", O_CREAT | O_WRONLY, S_IWRITE )) == -1 ) {
		printf("'sample.dat' が書き込みモードでオープンできません\n");
		return 0;
	}
	write( fd, "Hello world.", 12 );
	close( fd );
	
	/* 読み出しモードでオープン */
	if ((fd = open( "sample.dat", O_RDWR )) == -1 ) {
		printf("'sample.dat' が読み出しモードでオープンできません\n");
		return 0;
	}
	
	/* 先頭の１バイトを読み出し */
	count = read( fd, &ch, 1 );
	if ( count == 0 ) {
		printf("ファイルの終端に達しました\n");
	} else if ( count == -1 ) {
		printf("エラーが発生しました [%d]\n", errno );
	} else {
		printf("１文字読み込み [%c]\n", ch );
	}
	
	count = read( fd, buff, 8 );
	if ( count == 0 ) {
		printf("ファイルの終端に達しました\n");
	} else if ( count == -1 ) {
		printf("エラーが発生しました [%d]\n", errno );
	} else {
		buff[count] = '\0';
		printf("%d 文字読み込み [%s]\n", count, buff );
	}
	
	close( fd );
	
	return 1;
}

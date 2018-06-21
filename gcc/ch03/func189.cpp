#include <stdio.h>
#include <unistd.h>
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
	if ( write( fd, "Hello world.", 12 ) == 12 ) {
		printf( "正常に書き込みました\n");
	} else {
		printf( "書き込み時にエラーが発生しました [%d]\n", errno );
	}
	close( fd );
	
	/* 読み出しモードでオープン */
	if ((fd = open( "sample.dat", O_RDONLY )) == -1 ) {
		printf("'sample.dat' が読み出しモードでオープンできません\n");
		return 0;
	}
	/* 読み出しモードで開いているので、ここではエラーが発生する */
	if ( write( fd, "Hello world.", 12 ) == 12 ) {
		printf( "正常に書き込みました\n");
	} else {
		printf( "書き込み時にエラーが発生しました [%d]\n", errno );
	}
	close( fd );
	
	return 1;
}

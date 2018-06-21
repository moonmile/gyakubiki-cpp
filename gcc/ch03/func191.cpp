#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

int main( void )
{
	int fd, size;
	char buff[10];
	
	/* 新しいファイルをオープン */
	if ((fd = open( "sample.dat", O_CREAT | O_WRONLY, S_IWRITE )) == -1 ) {
		printf("'sample.dat' が書き込みモードでオープンできません\n");
		return 0;
	}
	write( fd, "ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26 );
	close( fd );
	
	/* 読み出しモードでオープン */
	if ((fd = open( "sample.dat", O_RDONLY )) == -1 ) {
		printf("'sample.dat' が読み出しモードでオープンできません\n");
		return 0;
	}
	/* 5文字ずつ読み出す */
	while ( !eof(fd) ) {
		size = read( fd, buff, 5 );
		if ( size == 0 ) break;
		if ( size < 0 ) {
			printf("読み出し時にエラーが発生しました [%d]\n", errno );
			break;
		}
		buff[size] = '\0';
		printf( "読み出しデータ:[%s]\n", buff );
	}
	close( fd );
	
	return 1;
}

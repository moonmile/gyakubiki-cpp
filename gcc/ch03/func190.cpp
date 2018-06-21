#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

int main( void )
{
	int fd, offset;
	char ch;
	
	/* 新しいファイルをオープン */
	if ((fd = open( "sample.dat", O_CREAT | O_WRONLY, S_IWRITE )) == -1 ) {
		printf("'sample.dat' が書き込みモードでオープンできません\n");
		return 0;
	}
	write( fd, "ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26 );
	close( fd );
	
	/* 読み出しモードでオープン */
	if ((fd = open( "sample.dat", O_RDWR )) == -1 ) {
		printf("'sample.dat' が読み出しモードでオープンできません\n");
		return 0;
	}
	
	offset = lseek( fd, 4, SEEK_SET ); read( fd, &ch, 1 );
	printf( "先頭から 4 バイト目:[%c] offset:[%d]\n", ch, offset );
	offset = lseek( fd, 3, SEEK_CUR ); read( fd, &ch, 1 );
	printf( "さらに 3 バイト進む:[%c] offset:[%d]\n", ch, offset );
	offset = lseek( fd, -5, SEEK_END ); read( fd, &ch, 1 );
	printf( "最後から 5 バイト目:[%c] offset:[%d]\n", ch, offset );
	
	close( fd );
	
	return 1;
}

#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <Share.h>

int main( void )
{
	int fd = 0;
	char buff[100];
	
	/* 新しいファイルをオープン */
	if ( _sopen_s( &fd, "sample.dat", O_CREAT | O_WRONLY, _SH_DENYRW, S_IWRITE ) == -1 ) {
		printf("'sample.dat' が書き込みモードでオープンできません\n");
		return 0;
	}
	write( fd, "Hello world.", 12 );
	close( fd );

	/* 追加モードでオープン */
	if ( _sopen_s( &fd, "sample.dat", O_APPEND | O_WRONLY, _SH_DENYRW, S_IWRITE ) == -1 ) {
		printf("'sample.dat' が追加モードでオープンできません\n");
		return 0;
	}
	write( fd, "Hello world, too.", 16 );
	close( fd );
	
	/* 読み出しモードでオープン */
	if ( _sopen_s( &fd, "sample.dat", O_RDONLY, _SH_DENYRW, S_IREAD ) == -1 ) {
		printf("'sample.dat' が読み出しモードでオープンできません\n");
		return 0;
	}
	read( fd, buff, 12 );
	write( 1, buff, 12 );	/* stdout へ書き込む */
	close( fd );
	
	return 1;
}

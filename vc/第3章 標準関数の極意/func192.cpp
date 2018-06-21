#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

int main( void )
{
	int fd;
	int newmask, oldmask;

	/* アクセス権を変更 */
	newmask = _S_IWRITE;
	oldmask = _umask( newmask );
	printf( "直前のアクセス権: [%08X]\n", oldmask );
	printf( "新しいアクセス権: [%08X]\n", newmask );
	
	/* 書き込みモードでオープン */
	if ((fd = open( "sample.dat", O_CREAT | O_WRONLY, S_IWRITE )) == -1 ) {
		printf("'sample.dat' が書き込みモードでオープンできません\n");
		return 0;
	}
	write( fd, "Hello world.", 12 );
	close( fd );
	
	/* sample.dat が読み取り専用に変更されている */
	return 1;
}

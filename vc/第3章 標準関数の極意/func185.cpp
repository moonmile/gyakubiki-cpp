#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

int main( void )
{
	int fd = 0;
	char buff[100];
	
	/* �V�����t�@�C�����I�[�v�� */
	if ( (fd = open( "sample.dat", O_CREAT | O_WRONLY, S_IWRITE )) == -1 ) {
		printf("'sample.dat' ���������݃��[�h�ŃI�[�v���ł��܂���\n");
		return 0;
	}
	write( fd, "Hello world.", 12 );
	close( fd );

	/* �ǉ����[�h�ŃI�[�v�� */
	if ( (fd = open( "sample.dat", O_APPEND | O_WRONLY, S_IWRITE )) == -1 ) {
		printf("'sample.dat' ���ǉ����[�h�ŃI�[�v���ł��܂���\n");
		return 0;
	}
	write( fd, "Hello world, too.", 16 );
	close( fd );
	
	/* �ǂݏo�����[�h�ŃI�[�v�� */
	if ( (fd = open( "sample.dat", O_RDONLY, S_IREAD )) == -1 ) {
		printf("'sample.dat' ���ǂݏo�����[�h�ŃI�[�v���ł��܂���\n");
		return 0;
	}
	read( fd, buff, 12 );
	write( 1, buff, 12 );	/* stdout �֏������� */
	close( fd );
	
	return 1;
}

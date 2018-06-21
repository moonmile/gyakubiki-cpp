#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

int main( void )
{
	int fd, size;
	char buff[10];
	
	/* �V�����t�@�C�����I�[�v�� */
	if ((fd = open( "sample.dat", O_CREAT | O_WRONLY, S_IWRITE )) == -1 ) {
		printf("'sample.dat' ���������݃��[�h�ŃI�[�v���ł��܂���\n");
		return 0;
	}
	write( fd, "ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26 );
	close( fd );
	
	/* �ǂݏo�����[�h�ŃI�[�v�� */
	if ((fd = open( "sample.dat", O_RDONLY )) == -1 ) {
		printf("'sample.dat' ���ǂݏo�����[�h�ŃI�[�v���ł��܂���\n");
		return 0;
	}
	/* 5�������ǂݏo�� */
	while ( !eof(fd) ) {
		size = read( fd, buff, 5 );
		if ( size == 0 ) break;
		if ( size < 0 ) {
			printf("�ǂݏo�����ɃG���[���������܂��� [%d]\n", errno );
			break;
		}
		buff[size] = '\0';
		printf( "�ǂݏo���f�[�^:[%s]\n", buff );
	}
	close( fd );
	
	return 1;
}

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
	
	/* �V�����t�@�C�����I�[�v�� */
	if ((fd = open( "sample.dat", O_CREAT | O_WRONLY, S_IWRITE )) == -1 ) {
		printf("'sample.dat' ���������݃��[�h�ŃI�[�v���ł��܂���\n");
		return 0;
	}
	if ( write( fd, "Hello world.", 12 ) == 12 ) {
		printf( "����ɏ������݂܂���\n");
	} else {
		printf( "�������ݎ��ɃG���[���������܂��� [%d]\n", errno );
	}
	close( fd );
	
	/* �ǂݏo�����[�h�ŃI�[�v�� */
	if ((fd = open( "sample.dat", O_RDONLY )) == -1 ) {
		printf("'sample.dat' ���ǂݏo�����[�h�ŃI�[�v���ł��܂���\n");
		return 0;
	}
	/* �ǂݏo�����[�h�ŊJ���Ă���̂ŁA�����ł̓G���[���������� */
	if ( write( fd, "Hello world.", 12 ) == 12 ) {
		printf( "����ɏ������݂܂���\n");
	} else {
		printf( "�������ݎ��ɃG���[���������܂��� [%d]\n", errno );
	}
	close( fd );
	
	return 1;
}

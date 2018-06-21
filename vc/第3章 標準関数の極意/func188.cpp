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
	write( fd, "Hello world.", 12 );
	close( fd );
	
	/* �ǂݏo�����[�h�ŃI�[�v�� */
	if ((fd = open( "sample.dat", O_RDWR )) == -1 ) {
		printf("'sample.dat' ���ǂݏo�����[�h�ŃI�[�v���ł��܂���\n");
		return 0;
	}
	
	/* �擪�̂P�o�C�g��ǂݏo�� */
	count = read( fd, &ch, 1 );
	if ( count == 0 ) {
		printf("�t�@�C���̏I�[�ɒB���܂���\n");
	} else if ( count == -1 ) {
		printf("�G���[���������܂��� [%d]\n", errno );
	} else {
		printf("�P�����ǂݍ��� [%c]\n", ch );
	}
	
	count = read( fd, buff, 8 );
	if ( count == 0 ) {
		printf("�t�@�C���̏I�[�ɒB���܂���\n");
	} else if ( count == -1 ) {
		printf("�G���[���������܂��� [%d]\n", errno );
	} else {
		buff[count] = '\0';
		printf("%d �����ǂݍ��� [%s]\n", count, buff );
	}
	
	close( fd );
	
	return 1;
}

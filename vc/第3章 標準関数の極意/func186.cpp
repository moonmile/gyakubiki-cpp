#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

int main( void )
{
	int fd;

	/* �������݃��[�h�ŃI�[�v�� */
	if ((fd = open( "sample.dat", O_CREAT | O_WRONLY, S_IWRITE )) == -1 ) {
		printf("'sample.dat' ���������݃��[�h�ŃI�[�v���ł��܂���\n");
		return 0;
	}
	
	/* �ŏ��͐���ɃN���[�Y�ł��� */
	if ( close( fd ) == 0 ) {
		printf("����Ƀn���h�����N���[�Y���܂���\n");
	} else {
		printf("�N���[�Y���ɃG���[���������܂��� [%d]\n", errno );
	}
	
	/* ���ɃN���[�Y���ꂽ�n���h���̏ꍇ�̓G���[���������� */
	if ( close( fd ) == 0 ) {
		printf("����Ƀn���h�����N���[�Y���܂���\n");
	} else {
		printf("�N���[�Y���ɃG���[���������܂��� [%d]\n", errno );
	}
	return 1;
}

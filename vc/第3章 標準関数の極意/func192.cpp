#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

int main( void )
{
	int fd;
	int newmask, oldmask;

	/* �A�N�Z�X����ύX */
	newmask = _S_IWRITE;
	oldmask = _umask( newmask );
	printf( "���O�̃A�N�Z�X��: [%08X]\n", oldmask );
	printf( "�V�����A�N�Z�X��: [%08X]\n", newmask );
	
	/* �������݃��[�h�ŃI�[�v�� */
	if ((fd = open( "sample.dat", O_CREAT | O_WRONLY, S_IWRITE )) == -1 ) {
		printf("'sample.dat' ���������݃��[�h�ŃI�[�v���ł��܂���\n");
		return 0;
	}
	write( fd, "Hello world.", 12 );
	close( fd );
	
	/* sample.dat ���ǂݎ���p�ɕύX����Ă��� */
	return 1;
}

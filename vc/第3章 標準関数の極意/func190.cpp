#include <stdio.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

int main( void )
{
	int fd, offset;
	char ch;
	
	/* �V�����t�@�C�����I�[�v�� */
	if ((fd = open( "sample.dat", O_CREAT | O_WRONLY, S_IWRITE )) == -1 ) {
		printf("'sample.dat' ���������݃��[�h�ŃI�[�v���ł��܂���\n");
		return 0;
	}
	write( fd, "ABCDEFGHIJKLMNOPQRSTUVWXYZ", 26 );
	close( fd );
	
	/* �ǂݏo�����[�h�ŃI�[�v�� */
	if ((fd = open( "sample.dat", O_RDWR )) == -1 ) {
		printf("'sample.dat' ���ǂݏo�����[�h�ŃI�[�v���ł��܂���\n");
		return 0;
	}
	
	offset = lseek( fd, 4, SEEK_SET ); read( fd, &ch, 1 );
	printf( "�擪���� 4 �o�C�g��:[%c] offset:[%d]\n", ch, offset );
	offset = lseek( fd, 3, SEEK_CUR ); read( fd, &ch, 1 );
	printf( "����� 3 �o�C�g�i��:[%c] offset:[%d]\n", ch, offset );
	offset = lseek( fd, -5, SEEK_END ); read( fd, &ch, 1 );
	printf( "�Ōォ�� 5 �o�C�g��:[%c] offset:[%d]\n", ch, offset );
	
	close( fd );
	
	return 1;
}

#include <stdio.h>
#include <memory.h>
#include <io.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#ifndef _MSC_VER
#define _creat(p,m) _open(p, O_CREAT|O_TRUNC|O_WRONLY, m | SH_DENYNO )
#endif

int main( void )
{
	int fd;
	char buff[100];
	
	/* �V�����t�@�C�����I�[�v�� */
	if ((fd = creat( "sample.dat", S_IWRITE )) == -1 ) {
		printf("'sample.dat' ���������݃��[�h�ŃI�[�v���ł��܂���\n");
		return 0;
	} else {
		printf("����ɃI�[�v���ł��܂��� [%d]\n", fd );
	}
	memset( buff, ' ', sizeof buff );
	write( fd, buff, sizeof buff );
	close( fd );	
	return 1;
}

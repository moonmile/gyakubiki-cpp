#include <stdio.h>
#include <errno.h>
#ifndef _MSC_VER
#error "Cannot use this function in gcc"
#endif
#include <io.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>

int main( void )
{
	int ret;
	struct _stat buf;
	
	ret = _stat( "func205.cpp", &buf );
	if ( ret == 0 ) {
		printf( "�t�@�C�������擾�ł��܂���\n");
		
		printf( "�ŏI�A�N�Z�X����: %s", ctime( &buf.st_atime ));
		printf( "�쐬����:         %s", ctime( &buf.st_ctime ));
		printf( "�ŏI�X�V����:     %s", ctime( &buf.st_mtime ));
		printf( "�t�@�C�����[�h:   %X\n", buf.st_mode );
		printf( "st_nlink:         %d\n", buf.st_nlink );
		printf( "st_dev:           %d\n", buf.st_dev );
		printf( "st_rdev:          %d\n", buf.st_rdev );
		printf( "�t�@�C���T�C�Y:   %d\n", buf.st_size );
	} else {
		printf( "�t�@�C�������擾�ł��܂���ł���\n");
	}

	return 1;
}

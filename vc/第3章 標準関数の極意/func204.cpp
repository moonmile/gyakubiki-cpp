#include <stdio.h>
#include <errno.h>
#ifndef _MSC_VER
#error "Cannot use this function in gcc"
#endif
#include <io.h>
#include <sys/stat.h>

int main( void )
{
	int ret;
	
	/* �������݋���ݒ肷�� */
	ret = _chmod( "func204.cpp", _S_IWRITE );
	if ( ret == 0 ) {
		printf("�������݋���ݒ肵�܂���\n");
	} else {
		printf("�������݋����ݒ�ł��܂���ł���\n");
	}
	
	ret = _chmod( "sample_no_file.txt", _S_IWRITE );
	if ( ret == 0 ) {
		printf("�������݋���ݒ肵�܂���\n");
	} else {
		printf("�������݋����ݒ�ł��܂���ł���\n");
	}
	return 1;
}

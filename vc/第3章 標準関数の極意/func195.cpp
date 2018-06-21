#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#ifdef _MSC_VER
#include <direct.h>
#else
#include <unistd.h>
#endif

int main( void )
{
	char buffer[260];
	char *path;
	
	/* �i�[�̈�ibuffer�j���w�肷�� */
	path = getcwd( buffer, sizeof buffer );
	if ( path == NULL ) {
		printf("�J�����g�f�B���N�g�����擾�ł��܂���ł��� [%d]\n", errno );
	} else {
		printf("�J�����g�f�B���N�g��: %s\n", path );
	}
	
	/* �i�[�̈�ibuffer�j�� NULL ���w�肷�� */
	path = getcwd( NULL, 260 );
	if ( path == NULL ) {
		printf("�J�����g�f�B���N�g�����擾�ł��܂���ł��� [%d]\n", errno );
	} else {
		printf("�J�����g�f�B���N�g��: %s\n", path );
		free( path );
	}
	
	/* �p�X�̍ő�l�imaxlen�j�������������ꍇ */
	path = getcwd( buffer, 10 );
	if ( path == NULL ) {
		printf("�J�����g�f�B���N�g�����擾�ł��܂���ł��� [%d]\n", errno );
	} else {
		printf("�J�����g�f�B���N�g��: %s\n", path );
		free( path );
	}
	
	return 1;
}

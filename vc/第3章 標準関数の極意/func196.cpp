#include <stdio.h>
#include <errno.h>
#ifdef _MSC_VER
#include <direct.h>
#else
#include <unistd.h>
#include <sys/stat.h>
#define mkdir(path)	mkdir(path,0)
#endif

int main( void )
{
	if ( mkdir("sample") != 0 ) {
		printf("'sample' �f�B���N�g�����쐬�ł��܂���ł��� [%d]\n", errno );
	} else {
		printf("'sample' �f�B���N�g�����쐬���܂���\n");
	}
	
	/* ���ɑ��݂���f�B���N�g�����w�肷�� */
	if ( mkdir("sample") != 0 ) {
		printf("'sample' �f�B���N�g�����쐬�ł��܂���ł��� [%d]\n", errno );
	} else {
		printf("'sample' �f�B���N�g�����쐬���܂���\n");
	}
	
	/* �쐬�ł��Ȃ��f�B���N�g�����w�肷�� */
	if ( mkdir("/err/path/sample") != 0 ) {
		printf("'/err/path/sample' �f�B���N�g�����쐬�ł��܂���ł��� [%d]\n", errno );
	} else {
		printf("'/err/path/sample' �f�B���N�g�����쐬���܂���\n");
	}
	
	rmdir("sample");
	return 1;
}

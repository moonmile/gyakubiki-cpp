#include <stdio.h>
#include <io.h>
#include <errno.h>
#ifndef _MSC_VER
#error "Only can use filelength function in VC"
#endif

int main( void )
{
	FILE *fp;
	long long size;
	if ((fp=fopen("func200.cpp","r")) == NULL ) {
		printf("'func200.cpp' ���I�[�v���ł��܂���ł���\n");
		return 1;
	}
	size = _filelengthi64( fileno(fp));
	printf("�t�@�C����: %lld\n", size );
	fclose(fp);
	return 1;
}

#include <stdio.h>
#ifdef _MSC_VER
#define fileno _fileno
#endif

int main( void )
{
	FILE *fp;
	if ((fp=fopen("sample.dat","w")) == NULL ) {
		printf("'sample.dat' ���������݃I�[�v���ł��܂���ł���\n");
		return 0;
	}
	
	printf("fp �̃t�@�C���n���h��:     %d\n", fileno(fp));
	printf("stdin �̃t�@�C���n���h��:  %d\n", fileno(stdin));
	printf("stdout �̃t�@�C���n���h��: %d\n", fileno(stdout));
	fclose( fp );
	return 1;
}

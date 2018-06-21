#include <stdio.h>
#include <errno.h>
#ifndef _MSC_VER
#include <sys/unistd.h>
#endif

int main( void )
{
	FILE *fp;
	
	if ( (fp=fopen("sample.dat","w")) == NULL ) {
		printf("'sample.dat' ���������݃I�[�v���ł��܂���\n");
		return 0;
	}
	fputs("this is sample data\n", fp );
	fclose( fp );
	
	/* �t�@�C�����폜���� */
	if ( unlink("sample.dat") == 0 ) {
		printf("'sample.dat' ���폜���܂���\n");
	} else {
		printf("'sample.dat' ���폜���ɃG���[���������܂��� [%d]\n", errno );
	}
	
	/* ���݂��Ȃ��t�@�C�����폜���� */
	if ( unlink("sample2.dat") == 0 ) {
		printf("'sample2.dat' ���폜���܂���\n");
	} else {
		printf("'sample2.dat' ���폜���ɃG���[���������܂��� [%d]\n", errno );
	}
	return 1;
}

#include <stdio.h>
#include <errno.h>

int main( void )
{
	FILE *fp;
	
	if ((fp=fopen("sample.dat","w")) == NULL ) {
		printf("'sample.dat' ���������݃I�[�v���ł��܂���ł���\n");
		return 0;
	}
	fputs("sample data\n", fp );
	fclose( fp );
	
	/* �t�@�C������ύX */
	if ( rename("sample.dat","sample2.dat") == 0 ) {
		printf("'sample2.dat' �Ƀt�@�C������ύX���܂���\n");
	} else {
		printf("'sample.dat' �̃t�@�C�����̕ύX�Ɏ��s���܂��� [%d]\n", errno );
	}
	
	/* �t�@�C�����폜 */
	remove("sample2.dat");
	/* ���݂��Ȃ��t�@�C������ύX */
	if ( rename("sample2.dat","sample3.dat") == 0 ) {
		printf("'sample3.dat' �Ƀt�@�C������ύX���܂���\n");
	} else {
		printf("'sample2.dat' �̃t�@�C�����̕ύX�Ɏ��s���܂��� [%d]\n", errno );
	}
	
	return 1;
}

#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	if ( (fp=fopen("sample.txt","w")) == NULL ) {
		printf("'sample.txt' ���������݃I�[�v���ł��܂���ł���\n");
		return 0;
	}

	char buffer[] = "Hello world";
	/* �����ȃt�H�[�}�b�g���w�� */
	fprintf( fp, "��������o�� �@�@�@�@�@: [%12]\n", buffer );
	/* �Z�L�����e�B�łł͗�O���������� */	
	fprintf_s( fp, "��������o�� �@�@�@�@�@: [%12]\n", buffer );
	
	fclose(fp);
	return 1;
}

#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	int ch, i;

	if ( (fp=fopen("sample.txt","w")) == NULL ) {
		printf("'sample.txt' ���������݃I�[�v���ł��܂���ł���\n");
		return 0;
	}
	fputs("Hello C world\n", fp );
	fputs("Hello C++ world\n", fp );
	fclose( fp );

	if ( (fp=fopen("sample.txt","r")) == NULL ) {
		printf("'sample.txt' ���ǂݏo���I�[�v���ł��܂���ł���\n");
		return 0;
	}

	char buffer[100];
	i = 0;
	/* fgets �֐��̖߂�l�� NULL �Ńt�@�C���̏I�[���`�F�b�N���� */
	while ( fgets( buffer, sizeof buffer, fp ) != NULL ) {
		printf("%d: %s", ++i, buffer );
	}
	fclose(fp);
}

#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	int ch, i;

	if ( (fp=fopen("sample.txt","w")) == NULL ) {
		printf("'sample.txt' ���������݃I�[�v���ł��܂���ł���\n");
		return 0;
	}
	fputs("Hello world\n", fp );
	fclose( fp );

	if ( (fp=fopen("sample.txt","r")) == NULL ) {
		printf("'sample.txt' ���ǂݏo���I�[�v���ł��܂���ł���\n");
		return 0;
	}
	
	/* fgetc �֐��̖߂�l�� EOF �Ńt�@�C���̏I�[���`�F�b�N���� */
	i = 0;
	while ( (ch = fgetc( fp )) != EOF ) {
		printf("%d: %c %02X\n", ++i, ch, ch );
	}
	fclose(fp);
	return 1;
}

#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	char buffer[100];
	int n, count;
	char ch;
	double d;
	
	if ( (fp=fopen("sample.txt","w")) == NULL ) {
		printf("'sample.txt' ���������݃I�[�v���ł��܂���ł���\n");
		return 0;
	}
	fputs("Hello A 100 100.123\n", fp );
	fclose( fp );

	if ( (fp=fopen("sample.txt","r")) == NULL ) {
		printf("'sample.txt' ���ǂݏo���I�[�v���ł��܂���ł���\n");
		return 0;
	}

	/* �����t���œǂݏo�� */
	count = fscanf( fp, "%s %c %d %lf\n", buffer, &ch, &n, &d );
	printf("�t�B�[���h�� %d ��ǂݍ��݂܂���\n", count );
	printf("������: [%s]\n", buffer );
	printf("����:   [%c]\n", ch );
	printf("���l:   [%d]\n", n );
	printf("����:   [%f]\n", d );
	
	fseek( fp, 0, SEEK_SET ); /* �擪�ɖ߂� */
	fscanf( fp, "%3s", buffer );
	printf("�ŏ��̂R����: [%s]\n", buffer );
	
	fclose( fp );
	return 1;
}

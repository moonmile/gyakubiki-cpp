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
	count = fscanf( fp, "%12 %c %d %lf\n", buffer, &ch, 1, &n, &d );
	printf("�t�B�[���h�� %d ��ǂݍ��݂܂���\n", count );
	
	fseek( fp, 0, SEEK_SET ); /* �擪�ɖ߂� */
	/* �����ُ�̏ꍇ */
	count = fscanf_s( fp, "%12 %c %d %lf\n", buffer, 99, &ch, 1, &n, &d );
	printf("�t�B�[���h�� %d ��ǂݍ��݂܂���\n", count );

	fclose( fp );
	return 1;
}

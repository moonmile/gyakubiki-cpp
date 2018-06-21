#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	char buffer[4];
	int count;
	
	if ( (fp=fopen("sample.dat","w")) == NULL ) {
		printf("'sample.dat' ���������݃I�[�v���ł��܂���ł���\n");
		return 0;
	}
	fputs("Hello world", fp );
	fclose(fp);
	
	if ( (fp=fopen("sample.dat","r")) == NULL ) {
		printf("'sample.dat' ��ǂݏo���I�[�v���ł��܂���ł���\n");
		return 0;
	}
	/* 4 �o�C�g���ǂݏo�� */
	while ( !feof(fp) ) {
		count = fread( buffer, 1, sizeof buffer, fp );
		if ( ferror(fp) ) {
			printf("�ǂݏo�����ɃG���[���������܂���");
			break;
		}
		printf("�ǂݏo��[%d]: ", count );
		fwrite( buffer, 1, count, stdout );
		putchar('\n');
	}
	fclose(fp);
	
	return 1;
}

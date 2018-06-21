#include <stdio.h>

int main( void )
{
	FILE *fp;
	char buffer[100];
	
	/* �������݃��[�h�ŊJ�� */
	puts("test write mode");
	if ( (fp=fopen("sample.txt","w")) == NULL ) {
		puts("�t�@�C�� 'sample.txt' ���J���܂���ł���");
	} else {
		// �P�s��������
		fputs( "file open as write mode\n", fp );
		fclose( fp );
	}

	/* �ǂݍ��݃��[�h�ŊJ�� */
	puts("test read mode");
	if ( (fp=fopen("sample.txt","r")) == NULL ) {
		puts("�t�@�C�� 'sample.txt' ���J���܂���ł���");
	} else {
		/* �P�s�ǂݍ��� */
		fgets( buffer, sizeof buffer, fp );
		puts( buffer );
		fclose(fp);
	}
	
	/* �ǉ����[�h�ŊJ��*/
	puts("test append mode");
	if ( (fp=fopen("sample.txt","a")) == NULL ) {
		puts("�t�@�C�� 'sample.txt' ���J���܂���ł���");
	} else {
		/* �P�s�ǉ����� */
		fputs( "file open as append mode\n", fp );
		fclose( fp );
	}
	
	return 1;
}


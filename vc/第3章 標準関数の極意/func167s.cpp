#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	char buffer[100];
	
	/* �������݃��[�h�ŊJ�� */
	puts("test write mode");
	if ( fopen_s( &fp, "sample.txt","w") != 0 ) {
		puts("�t�@�C�� 'sample.txt' ���J���܂���ł���");
	} else {
		// �P�s��������
		fputs( "file open as write mode\n", fp );
		fclose( fp );
	}

	/* �ǂݍ��݃��[�h�ŊJ�� */
	puts("test read mode");
	if ( fopen_s( &fp, "sample.txt","r") != 0 ) {
		puts("�t�@�C�� 'sample.txt' ���J���܂���ł���");
	} else {
		/* �P�s�ǂݍ��� */
		fgets( buffer, sizeof buffer, fp );
		puts( buffer );
		fclose(fp);
	}
	
	/* �ǉ����[�h�ŊJ��*/
	puts("test append mode");
	if ( fopen_s( &fp, "sample.txt","a" ) != 0 ) {
		puts("�t�@�C�� 'sample.txt' ���J���܂���ł���");
	} else {
		/* �P�s�ǉ����� */
		fputs( "file open as append mode\n", fp );
		fclose( fp );
	}
	
	return 1;
}


#include <stdio.h>

int main( void )
{
	FILE *fp = NULL;
	if ( (fp=fopen("sample.txt","w")) == NULL ) {
		printf("'sample.txt' ���������݃I�[�v���ł��܂���ł���\n");
		return 0;
	}
	
	int count = 1234;
	int ch = 'A';
	char buffer[] = "Hello world";
	
	/* ���l���o�� */
	fprintf( fp, "���l���o��             : [%d]\n", count );
	fprintf( fp, "���l���o�́i�E�l�߁j�@ : [%6d]\n", count );
	fprintf( fp, "���l���o�́i�[���l�߁j : [%06d]\n", count );
	fprintf( fp, "���l���o�́i���l�߁j�@ : [%-6d]\n", count );

	/* �������o�� */
	fprintf( fp, "�������o��             : [%c]\n", ch );
	
	/* ��������o�� */
	fprintf( fp, "��������o�� �@�@�@�@�@: [%s]\n", buffer );
	fprintf( fp, "��������o�́i�E�l�߁j : [%15s]\n", buffer );
	fprintf( fp, "��������o�́i���l�߁j : [%-15s]\n", buffer );
	fprintf( fp, "��������o�́i�����j   : [%.5s]\n", buffer );

	/* ���ς��ďo�� */
	fprintf( fp, "�P�O�i��               : [%d]\n", count );
	fprintf( fp, "�W�i��                 : [%o]\n", count );
	fprintf( fp, "�P�U�i���i�������j     : [%x]\n", count );
	fprintf( fp, "�P�U�i���i�啶���j     : [%X]\n", count );

	/* �����̕\�� */
	fprintf( fp, "����(double)   : [%e]\n", 100.123 );
	fprintf( fp, "����(double)   : [%E]\n", 100.123 );
	fprintf( fp, "����(float)    : [%f]\n", 100.123 );
	fprintf( fp, "����(�Z�k�`)   : [%g]\n", 100.123 );
	fprintf( fp, "����(���x)     : [%.5f]\n", 100.123 );
	fprintf( fp, "����(���x)     : [%.0f]\n", 100.123 );
	
	/* �|�C���^�\�� */
	fprintf( fp, "�|�C���^       : [%p]\n", &count );
	
	fclose( fp );
	return 1;
}

#include <stdio.h>

int main( void )
{
	int count = 1234;
	int ch = 'A';
	char buffer[] = "Hello world";
	
	/* ���l���o�� */
	printf( "���l���o��             : [%d]\n", count );
	printf( "���l���o�́i�E�l�߁j�@ : [%6d]\n", count );
	printf( "���l���o�́i�[���l�߁j : [%06d]\n", count );
	printf( "���l���o�́i���l�߁j�@ : [%-6d]\n", count );

	/* �������o�� */
	printf( "�������o��             : [%c]\n", ch );
	
	/* ��������o�� */
	printf( "��������o�� �@�@�@�@�@: [%s]\n", buffer );
	printf( "��������o�́i�E�l�߁j : [%15s]\n", buffer );
	printf( "��������o�́i���l�߁j : [%-15s]\n", buffer );
	printf( "��������o�́i�����j   : [%.5s]\n", buffer );

	/* ���ς��ďo�� */
	printf( "�P�O�i��               : [%d]\n", count );
	printf( "�W�i��                 : [%o]\n", count );
	printf( "�P�U�i���i�������j     : [%x]\n", count );
	printf( "�P�U�i���i�啶���j     : [%X]\n", count );

	/* �����̕\�� */
	printf( "����(double)   : [%e]\n", 100.123 );
	printf( "����(double)   : [%E]\n", 100.123 );
	printf( "����(float)    : [%f]\n", 100.123 );
	printf( "����(�Z�k�`)   : [%g]\n", 100.123 );
	printf( "����(���x)     : [%.5f]\n", 100.123 );
	printf( "����(���x)     : [%.0f]\n", 100.123 );
	
	/* �|�C���^�\�� */
	printf( "�|�C���^       : [%p]\n", &count );
}

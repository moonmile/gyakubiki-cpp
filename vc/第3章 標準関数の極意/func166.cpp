#include <stdio.h>

int main( void )
{
	int count = 1234;
	int ch = 'A';
	char str[] = "Hello world";
	char buff[100];
	
	sprintf( buff, "���l���o��             : [%d]\n", count );
	printf( buff );

	/* �������o�� */
	sprintf( buff, "�������o��             : [%c]\n", ch );
	printf( buff );
	
	/* ��������o�� */
	sprintf( buff, "��������o�� �@�@�@�@�@: [%s]\n", str );
	printf( buff );

	/* ���ς��ďo�� */
	sprintf( buff, "�P�O�i��               : [%d]\n", count );
	printf( buff );

	/* �����̕\�� */
	sprintf( buff, "����(double)   : [%e]\n", 100.123 );
	printf( buff );
	
	/* �|�C���^�\�� */
	sprintf( buff, "�|�C���^       : [%p]\n", &count );
	printf( buff );
}

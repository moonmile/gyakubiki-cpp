#include <stdio.h>

int main( void )
{
	char str[] = "Hello world";
	char buff[100];
	
	/* �����ȃt�H�[�}�b�g���w�� */
	sprintf( buff, "��������o�� �@�@�@�@: [%12]\n", str );
	printf( buff );
	/* �Z�L�����e�B�łł͗�O���������� */	
	sprintf_s( buff, "��������o�� �@�@�@�@: [%12]\n", str );
	printf( buff );
}

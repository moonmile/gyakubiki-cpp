#include <stdio.h>

int main( void )
{
	char buffer[] = "Hello world";
	
	/* �����ȃt�H�[�}�b�g���w�� */
	printf( "��������o�� �@�@�@�@�@: [%12]\n", buffer );
	/* �Z�L�����e�B�łł͗�O���������� */	
	printf_s( "��������o�� �@�@�@�@�@: [%12]\n", buffer );
}

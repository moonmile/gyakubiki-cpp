#include <stdio.h>
#include <stdarg.h>

void main( void )
{
	char *argv1[] = { "Hello", "world,", "too" };
	
	/* �W���o�͂� */
	vprintf( "������: [%1] [%2] [%3]\n", (va_list)argv1 );
	/* �����ȃt�H�[�}�b�g�̏ꍇ�͗�O���������� */
	vprintf_s( "������: [%1] [%2] [%3]\n", (va_list)argv1 );
}

#include <stdio.h>
#include <stdarg.h>

int main( void )
{
	FILE *fp = NULL;
	if ( (fp=fopen("sample.txt","w")) == NULL ) {
		printf("'sample.txt' ���������݃I�[�v���ł��܂���ł���\n");
		return 0;
	}
	char *argv1[] = { "Hello", "world,", "too" };
	
	/* �t�@�C���֏o�� */
	vfprintf( fp, "������: [%1] [%2] [%3]\n", (va_list)argv1 );
	/* �����ȃt�H�[�}�b�g�̏ꍇ�͗�O���������� */
	vfprintf_s( fp, "������: [%1] [%2] [%3]\n", (va_list)argv1 );
	
	fclose(fp);
	return 1;
}

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
	int   argv2[] = { 'H','e','l','l','o' };
	int   argv3[] = { 100, 200, 300 };
	int   argv4[] = { (int)"Hello", 'A', 100 };
	
	/* �W���o�͂� */
	vfprintf( fp, "������: [%s] [%s] [%s]\n", (va_list)argv1 );
	vfprintf( fp, "����:   %c %c %c %c %c\n", (va_list)argv2 );
	vfprintf( fp, "���l:   %d %d %d\n", (va_list)argv3 );
	vfprintf( fp, "����:   %s %c %d\n", (va_list)argv4 );
	
	fclose(fp);
	return 1;
}

#include <stdio.h>
#include <stdarg.h>

void main( void )
{
	char *argv1[] = { "Hello", "world,", "too" };
	int   argv2[] = { 'H','e','l','l','o' };
	int   argv3[] = { 100, 200, 300 };
	int   argv4[] = { (int)"Hello", 'A', 100 };
	
	/* •W€o—Í‚Ö */
	vprintf( "•¶š—ñ: [%s] [%s] [%s]\n", (va_list)argv1 );
	vprintf( "•¶š:   %c %c %c %c %c\n", (va_list)argv2 );
	vprintf( "”’l:   %d %d %d\n", (va_list)argv3 );
	vprintf( "¬İ:   %s %c %d\n", (va_list)argv4 );
}

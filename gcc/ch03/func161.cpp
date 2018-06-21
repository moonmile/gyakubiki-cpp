#include <stdio.h>
#include <stdarg.h>


void myprint( const char *fmt, ... ) 
{
	va_list ap;
	va_start( ap, fmt );
	vprintf( fmt, ap );
	va_end(ap);
}

int main( void )
{
	/* 標準出力へ */
	myprint( "文字列: [%s] [%s] [%s]\n", "Hello", "world,", "too" );
	myprint( "文字:   %c %c %c %c %c\n", 'H','e','l','l','o' );
	myprint( "数値:   %d %d %d\n", 100, 200, 300 );
	myprint( "混在:   %s %c %d\n", "Hello", 'A', 100 );
}

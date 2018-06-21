#include <stdio.h>
#include <stdarg.h>

void debug( char *file, int line, char *fmt, ... )
{
	va_list args ;

	printf( "%s (%d): ", file, line );
	va_start( args, fmt );
	vprintf( fmt, args ) ; 
	va_end( args ) ;
}

int main( void )
{
	debug( __FILE__, __LINE__, "sample %d\n", 10 );
}

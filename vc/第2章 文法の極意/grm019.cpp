#include <stdio.h>
#include <locale.h>

void main( void )
{
	setlocale(LC_CTYPE, "");
	
	char s[] = "masuda";
	wchar_t w[] = L"���c�q��";
	
	printf( "name: %s\n", s );
	printf( "name: %S\n", w );
}

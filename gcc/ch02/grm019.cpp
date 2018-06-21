#include <stdio.h>
#include <locale.h>

int main( void )
{
	setlocale(LC_CTYPE, "");
	
	char s[] = "masuda";
	wchar_t w[] = L"増田智明";
	
	printf( "name: %s\n", s );
	printf( "name: %S\n", w );
}

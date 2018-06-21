#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main( void )
{
	setlocale(LC_CTYPE, "");

	wchar_t wstr = L'A';
	wchar_t kstr = L'Š¿';
	char str[3] = {0};
	char kanji[3] = {0};
	
	wctomb( str, wstr );
	wctomb( kanji, kstr );
	printf("[%s][%s]\n", str, kanji );
}

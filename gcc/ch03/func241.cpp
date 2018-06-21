#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main( void )
{
	setlocale(LC_CTYPE, "");

	wchar_t wstr = L'A';
	wchar_t kstr = L'漢';
	char str[3] = {0};
	char kanji[3] = {0};
	
	wctomb( str, wstr );
	wctomb( kanji, kstr );
	printf("[%s][%s]\n", str, kanji );
}

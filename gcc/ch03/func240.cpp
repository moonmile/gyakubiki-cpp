#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main( void )
{
	setlocale(LC_CTYPE, "");

	char *str = "A";
	char *kanji = "漢";
	wchar_t wstr, kstr;
	mbtowc( &wstr, str, strlen(str) );
	mbtowc( &kstr, kanji, strlen(kanji) );

	printf("[%C][%C]\n", wstr, kstr );
}

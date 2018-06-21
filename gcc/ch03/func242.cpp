#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main( void )
{
	setlocale(LC_CTYPE, "");

	char *str = "Hello C/C++ World.";
	char *kanji = "ようこそC/C++の世界へ";
	wchar_t wstr[50] = {0};
	wchar_t kstr[50] = {0};
	
	mbstowcs( wstr, str, strlen(str) );
	mbstowcs( kstr, kanji, strlen(kanji) );
	printf("[%S]\n[%S]\n", wstr, kstr );
}

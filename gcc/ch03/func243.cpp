#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main( void )
{
	setlocale(LC_CTYPE, "");

	wchar_t wstr[] = L"Hello C/C++ World.";
	wchar_t kstr[] = L"ようこそC/C++の世界へ";
	char str[50] = {0};
	char kanji[50] = {0};
	
	wcstombs( str, wstr, 50 );
	wcstombs( kanji, kstr, 50 );
	printf("[%s]\n[%s]\n", str, kanji );
}

#include <stdio.h>

void main( void )
{
	const char *str = "Hello C/C++ World.";
	
//	char *s = str; 		// ‚»‚Ì‚Ü‚Ü‚ÅƒLƒƒƒXƒg‚Å‚«‚È‚¢
	char *s = const_cast<char*>( str );
}

#include <stdio.h>

void main( void )
{
	const char *str = "Hello C/C++ World.";
	
//	char *s = str; 		// ���̂܂܂ŃL���X�g�ł��Ȃ�
	char *s = const_cast<char*>( str );
}

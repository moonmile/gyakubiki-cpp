#include <stdio.h>

// �v���g�^�C�v�錾
// C++ �̏ꍇ�͂��̂Q�̊֐��͋�ʂ����
void func( int x );		
void func( char ch );

void main( void )
{
	int  x  = 10;
	char ch = 'A';
	
	func( x );
	func( ch );
}

void func( int x ) 
{
	printf( "func x:%d\n", x );
}
void func( char ch ) {
	printf( "func ch:%c\n", ch );
}

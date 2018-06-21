#include <stdio.h>

class Base {};
class Sub : public Base {};
class Other {};

int main( void )
{
	int v = 0;
	
	long d = static_cast<long>( v ); // キャスト可能
	char c = static_cast<char>( v ); // キャスト可能
//	int *p = static_cast<int*>( v ); // キャスト不可
	
	Base *sub = new Sub();
	Other *other = new Other();
	Sub *s1 = static_cast<Sub*>( sub );  // キャスト可能
//	Sub *s2 = static_cast<Sub*>( other );// キャスト不可
	delete sub ;
	delete other ;
}

#include <stdio.h>

class Base {};
class Sub : public Base {};
class Other {};

void main( void )
{
	int v = 0;
	
	long d = static_cast<long>( v ); // �L���X�g�\
	char c = static_cast<char>( v ); // �L���X�g�\
//	int *p = static_cast<int*>( v ); // �L���X�g�s��
	
	Base *sub = new Sub();
	Other *other = new Other();
	Sub *s1 = static_cast<Sub*>( sub );  // �L���X�g�\
//	Sub *s2 = static_cast<Sub*>( other );// �L���X�g�s��
	delete sub ;
	delete other ;
}

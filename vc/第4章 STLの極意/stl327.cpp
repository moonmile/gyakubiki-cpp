#include <string>
#include <iostream>
using namespace std;

void main( void )
{
	string s1( "Hello " );
	string s2( "World." );
	string out;
	
	// �ʏ�̒ǉ�
	out = "";
	out.append( s1 );
	out.append( "C++ " );
	out.append( "World." );
	cout << out << endl;

	// �����񒆂̎w�蕶������ǉ�
	out = "";
	out.append( s1 );
	out.append( "C++ ", 1 );
	out.append( " " );
	out.append( "World." );
	cout << out << endl;

	// �w��ʒu�ɒǉ�
	out = "Hello ";
	out.append( "ABCDEF", 2, 1 );
	cout << out << "++ World." << endl;

	// �w��񐔕��A�P������ǉ�
	out = "Hello World.";
	out.append( 10, '!' );
	cout << out << endl;

	// '+' �I�y���[�^���g�����ꍇ
	out = "";
	out = s1 + "C++ " + s2;
	cout << out << endl;

}

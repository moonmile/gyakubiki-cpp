#include <iostream>
using namespace std;

int main( void )
{
	char buf[100] = {0};
	
	cout << "���͕���: " ;

	// ���݈ʒu���擾
	cout << "���݈ʒu: " << cin.tellg() << endl;
	// 5 �o�C�g���ǂݍ���
	cin.read( buf, 5 );
	cout << "���͒l: " << buf << endl;

	// ���݈ʒu���擾
	cout << "���݈ʒu: " << cin.tellg() << endl;
	// 5 �o�C�g���ǂݍ���
	cin.read( buf, 5 );
	cout << "���͒l: " << buf << endl;

	// ���݈ʒu���擾
	cout << "���݈ʒu: " << cin.tellg() << endl;
}

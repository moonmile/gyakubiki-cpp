#include <iostream>
using namespace std;

int main( void )
{
	char buf[100] = {0};
	// �t�@�C�������_�C���N�g���Ă�������
	cout << "���͕���: " ;

	// 5 �o�C�g���ǂݍ���
	cin.read( buf, 5 );
	cout << "���͒l: " << buf << endl;

	// �擪�ɖ߂�
	cin.seekg( 0 );	
	// 5 �o�C�g���ǂݍ���
	cin.read( buf, 5 );
	cout << "���͒l: " << buf << endl;

	// �擪����Q�o�C�g�ڂ֖߂�
	cin.seekg( 2, ios::beg );
	// 5 �o�C�g���ǂݍ���
	cin.read( buf, 5 );
	cout << "���͒l: " << buf << endl;

	// ���݈ʒu����Q�o�C�g�߂�
	cin.seekg( 2, ios::cur );
	// 5 �o�C�g���ǂݍ���
	cin.read( buf, 5 );
	cout << "���͒l: " << buf << endl;

	// �I�[����10�o�C�g�O�܂Ői�߂�
	cin.seekg( -10, ios::end );
	// 5 �o�C�g���ǂݍ���
	cin.read( buf, 5 );
	cout << "���͒l: " << buf << endl;
}

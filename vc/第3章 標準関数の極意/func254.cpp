#include <stdio.h>
#include <string>
using namespace std;

void main( void )
{
	int *p1	= new int ;		// int�^
	*p1 = 20;
	printf( "int �^: %d\n", *p1 );
	delete p1;				// ���
	
	int *ary = new int[10];	// int�^�̔z��
	for ( int i=0; i<10; i++ ) {
		ary[i] = i;
	}
	printf( "int �^�̔z��: %d\n", ary[1] );
	delete [] ary;			// �z������
	
	char hello[] = "Hello C/C++ World.";
	string *s = new string( hello );
	printf( "string�N���X: %s\n", s->c_str());
	delete s;				// �I�u�W�F�N�g�����
}

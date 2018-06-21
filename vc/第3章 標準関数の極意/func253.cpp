#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

void main( void )
{
	int *p1	= new int ;		// int�^
	int *p2 = new int(10);	// int�^(������)
	*p1 = 20;
	printf( "int �^: %d\n", *p1 );
	printf( "int �^: %d\n", *p2 );
	delete p1;
	delete p2;
	
	int *ary = new int[10];	// int�^�̔z��
	for ( int i=0; i<10; i++ ) {
		ary[i] = i;
	}
	int **pp = new( int * );	// int�^�̃|�C���^
	int x = 10;
	*pp = &x;
	printf( "int �^�̔z��: %d\n", ary[1] );
	printf( "int �^�̃|�C���^: %x %d\n", *pp, **pp );
	delete [] ary;
	delete pp;
	
	char hello[] = "Hello C/C++ World.";
	char *str = new char[sizeof(hello)];	// char�^�̔z��
	strcpy( str, hello );
	string *s = new string( hello );		// string�N���X
	printf( "char�^�̔z��: %s\n", str );
	printf( "string�N���X: %s\n", s->c_str());
	delete [] str;
	delete s;
}

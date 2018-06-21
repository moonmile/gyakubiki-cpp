#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

void main( void )
{
	int *p1	= new int ;		// intŒ^
	int *p2 = new int(10);	// intŒ^(‰Šú‰»)
	*p1 = 20;
	printf( "int Œ^: %d\n", *p1 );
	printf( "int Œ^: %d\n", *p2 );
	delete p1;
	delete p2;
	
	int *ary = new int[10];	// intŒ^‚Ì”z—ñ
	for ( int i=0; i<10; i++ ) {
		ary[i] = i;
	}
	int **pp = new( int * );	// intŒ^‚Ìƒ|ƒCƒ“ƒ^
	int x = 10;
	*pp = &x;
	printf( "int Œ^‚Ì”z—ñ: %d\n", ary[1] );
	printf( "int Œ^‚Ìƒ|ƒCƒ“ƒ^: %x %d\n", *pp, **pp );
	delete [] ary;
	delete pp;
	
	char hello[] = "Hello C/C++ World.";
	char *str = new char[sizeof(hello)];	// charŒ^‚Ì”z—ñ
	strcpy( str, hello );
	string *s = new string( hello );		// stringƒNƒ‰ƒX
	printf( "charŒ^‚Ì”z—ñ: %s\n", str );
	printf( "stringƒNƒ‰ƒX: %s\n", s->c_str());
	delete [] str;
	delete s;
}

#include <stdio.h>
#include <vector>
using namespace std;

void main( void )
{
	int val = 0;
	// �ϐ����g��
	int i;
	for ( i=1; i<=10; i++ ) {
		val += i;
	}
	printf( "1 �` 10 �܂ł̍��v: %d\n", val );

	char str[] = "Hello world.";
	// �|�C���^���g��
	char *p;
	for ( p = str; *p != '\0'; p++ ) {
		printf( "[%c],", *p );
	}
	printf("\n");
	
	vector<int> v ;
	for ( i=0; i<10; i++ ) {
		v.push_back( i );
	}
	// �C�e���[�^���g��
	vector <int>::iterator it;
	for ( it = v.begin(); it != v.end(); it++ ) {
		printf( "%d,", *it );
	}
}

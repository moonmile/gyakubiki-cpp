#include <stdio.h>
#include <vector>
using namespace std ;

void func1( vector<int>::iterator it )
{
	// 値を変更する
	*it = 99;
}

void func2( vector<int>::iterator b, vector<int>::iterator e )
{
	while ( b != e ) {
		(*b)++;
		b++;
	}
}

int main( void )
{
	vector<int> v;
	for ( int i=0; i<10; i++ ) {
		v.push_back( i );
	}
	
	vector<int>::iterator it;
	for ( it = v.begin(); it != v.end(); it++ ) {
		printf("[%d]", *it );
	}
	printf("\n");

	it = v.begin(); ++it;
	func1( it );
	for ( it = v.begin(); it != v.end(); it++ ) {
		printf("[%d]", *it );
	}
	printf("\n");
	
	func2( v.begin(), v.end() );
	for ( it = v.begin(); it != v.end(); it++ ) {
		printf("[%d]", *it );
	}
	printf("\n");
}

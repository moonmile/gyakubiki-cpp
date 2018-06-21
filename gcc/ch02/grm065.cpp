#include <stdio.h>
#include <vector>
using namespace std;

int main( void )
{
	int val = 0;
	// 変数を使う
	int i;
	for ( i=1; i<=10; i++ ) {
		val += i;
	}
	printf( "1 〜 10 までの合計: %d\n", val );

	char str[] = "Hello world.";
	// ポインタを使う
	char *p;
	for ( p = str; *p != '\0'; p++ ) {
		printf( "[%c],", *p );
	}
	printf("\n");
	
	vector<int> v ;
	for ( i=0; i<10; i++ ) {
		v.push_back( i );
	}
	// イテレータを使う
	vector <int>::iterator it;
	for ( it = v.begin(); it != v.end(); it++ ) {
		printf( "%d,", *it );
	}
	printf("\n");
}

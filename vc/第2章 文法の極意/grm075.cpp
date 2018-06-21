#include <stdio.h>
#include <vector>
using namespace std;

void main( void )
{
    int ary[] = { 0,1,2,3,4,5,6,7,8,9 };
    for ( auto x : ary ) {
        printf( "%i,", x );
    }
    printf("\n");

    vector<int> vec ;
    for ( int i=0; i<10; i++ ) {
        vec.push_back( i );
    }
    // use iterator
    for ( auto it : vec ) {
        printf( "%d,", it );
    }
    printf("\n");
}

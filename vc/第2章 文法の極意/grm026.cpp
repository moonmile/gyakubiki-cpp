#include <stdio.h>
#include <vector>
using namespace std;

void main( void )
{
    auto str = "Hello world.";
    // use pointer
    for ( auto p = str; *p != '\0'; p++ ) {
        printf( "[%c],", *p );
    }
    printf("\n");

    vector<int> v ;
    for ( int i=0; i<10; i++ ) {
        v.push_back( i );
    }
    // use iterator
    for ( auto it = v.begin(); it != v.end(); it++ ) {
        printf( "%d,", *it );
    }
}

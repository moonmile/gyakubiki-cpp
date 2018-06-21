#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main( void )
{
    list <int> lst;
    for ( int i=0; i<10; i++ ) 
         lst.push_back( 10-i );
    cout << "lst: " ;
    for ( auto it : lst ) 
        cout << it << "," ;
    cout << endl;

    // sum
    int sum = 0;
    for_each( 
        lst.begin(), 
        lst.end(), 
        [&sum]( int x ) { sum += x; });
    cout << "sum: " << sum << endl;
    return 0;
}

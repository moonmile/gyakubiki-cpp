#include <iostream>
#include <list>
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

    // sort
    lst.sort( [](int x, int y){ return x < y;});
    cout << "lst: " ;
    for ( auto it : lst ) 
        cout << it << "," ;
    cout << endl;
    // reverse
    lst.sort( [](int x, int y){ return x > y;});
    cout << "lst: " ;
    for ( auto it : lst ) 
        cout << it << "," ;
    cout << endl;

    return 0;
}

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

    // lambda function
    auto func1 = [](int x, int y){ return x < y;};
    auto func2 = [](int x, int y){ return x > y;};
    auto print = [](list<int> &l) {
        for ( auto it : l ) 
            cout << it << "," ;
        cout << endl;
    };
    // sort
    lst.sort( func1 );
    cout << "lst: "; print( lst );
    // reverse
    lst.sort( func2 );
    cout << "lst: "; print( lst );

    return 0;
}

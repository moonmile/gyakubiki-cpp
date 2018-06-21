#include <stdio.h>
#include <iostream>
using namespace std;
int funcNum( int n ) {
    cout << "in funcNum" << endl;
    return 0;
}
int funcStr( const char *p ) {
    cout << "in funcStr" << endl;
    return 0;
}

int main( void ) 
{
    // NULL
    funcNum( NULL );
    funcStr( NULL );
    // nullptr
    // funcNum( nullptr ); // compile error
    funcStr( nullptr );
    return 0;
}
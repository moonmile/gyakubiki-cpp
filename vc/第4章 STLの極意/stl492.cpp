#include <iostream>
#include <list>
#include <memory>
using namespace std;

class A {
private:
    int _n;
public:
    A(int n) {  
        cout << "call constructor" << endl;
        _n = n ; 
    }
    int getN() { return _n ; }
    void add( int x ) { _n += x; }
    ~A() { 
        cout << "call destructor" << endl;
    }
};
int main( void )
{
    // use shared pointor
    shared_ptr<A> p1(new A(100));
    shared_ptr<A> p2 = p1;
    cout << "n: " << p1->getN() << "," << p2->getN() << endl;
    p1->add(10);
    cout << "n: " << p1->getN() << "," << p2->getN() << endl;
    // use uniqu pointor
    unique_ptr<A> q1(new A(200));
    // unique_ptr<A> q2 = q1; // compile error
    // unique_ptr<A> q2(q1);  // compile error
    unique_ptr<A> q2(std::move(q1));
    if ( q1 ) {
        cout << "n: " << q1->getN() << "," << q2->getN() << endl;
        q1->add(10);
        cout << "n: " << q1->getN() << "," << q2->getN() << endl;
    } else {
        cout << "cannot access q1" << endl;
    }
    return 0;
}


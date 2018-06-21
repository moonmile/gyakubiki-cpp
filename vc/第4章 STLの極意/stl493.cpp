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
    // use weak pointor
    shared_ptr<A> q1(new A(100));
    weak_ptr<A> q2(q1);
    // cout << "n: " << q1->getN() << "," << q2->getN() << endl; // compile error
    shared_ptr<A> q = q2.lock();
    cout << "n: " << q1->getN() << "," << q->getN() << endl;
    return 0;
}


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
    ~A() { 
        cout << "call destructor" << endl;
    }
};
int main( void )
{
    // use raw pointer
    A *a = new A(100);
    cout << "n: " << a->getN() << endl;
    delete a;
    // use smart pointor
    unique_ptr<A> p(new A(200));
    cout << "n: " << p->getN() << endl;
    return 0;
}


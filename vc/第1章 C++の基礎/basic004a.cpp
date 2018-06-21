#include <iostream>
#include <string>

class A {
private:
    std::string _lang;
public:
    A( const char *lang );
    void print();
};

int main( void ) {
    std::cout << "Hello C++ world." << std::endl;
    A hello( "C++" );
    hello.print();
}

A::A( const char *lang ) {
    _lang = std::string( lang );
}
void A::print() {
    std::cout << "Hello " << _lang << " world, again." << std::endl;
}


#include <iostream>
#include <string>
class A {
private:
    std::string _lang;
public:
    A( const char *lang ) {
        _lang = std::string( lang );
    }
    void print() {
        std::cout << "Hello " << _lang << " world, again." << std::endl;
    }
};

int main( void ) {
    std::cout << "Hello C++ world." << std::endl;
    A hello( "C++" );
    hello.print();

    std::cout << R"(c:\user\masuda raw)" << std::endl;
}

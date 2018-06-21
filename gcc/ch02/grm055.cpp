#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

struct POINT {
	int x, y ;
};

class Person {
private:
	string _name;
	int _age;
public:
	Person( string name, int age ) 
	{
		_name = name;
		_age = age;
	}
	string ToString() 
	{
		stringstream s;
		s << _name << "(" << _age << ")";
		return s.str();
	}
};

void func( POINT *pt )
{
	printf( "point: %d %d\n", pt->x, pt->y );
}

int main( void )
{
	POINT pt = { 10, 20 };
	func( &pt );
	
	Person *me = new Person("masuda",41);
	cout << me->ToString() << endl;
}

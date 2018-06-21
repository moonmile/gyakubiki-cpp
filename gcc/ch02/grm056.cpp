#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class Person 
{
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

int main( void )
{
	Person *me = new Person("masuda",41);
	cout << me->ToString() << endl;

	string (Person::*to_s)() = &Person::ToString;
	cout << (me->*to_s)() << endl;
}

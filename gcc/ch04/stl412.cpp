#include <iostream>
#include <map>
#include <string>
using namespace std;

int main( void )
{
	map <string, int> m;

	m.insert( pair<string,int>(string("C"), 1 ));
	m.insert( pair<string,int>(string("C++"), 2 ));
	m.insert( pair<string,int>(string("C++"), 3 ));
	m.insert( pair<string,int>(string("Java"), 4 ));
	
	cout << "count: " << m.size() << endl;
}

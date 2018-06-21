#include <iostream>
#include <map>
#include <string>
using namespace std;

void main( void )
{
	map <string, int> m;
	m.insert( pair<string,int>(string("C"), 1 ));
	m.insert( pair<string,int>(string("C++"), 2 ));
	m.insert( pair<string,int>(string("Java"), 3 ));
	
	cout << "count: " << m.size() << endl;
	// —v‘f‚ğíœ‚·‚é
	m.erase(string("Java"));
	cout << "count: " << m.size() << endl;

	multimap <string, int> mm;
	mm.insert( pair<string,int>(string("C"), 1 ));
	mm.insert( pair<string,int>(string("C++"), 2 ));
	mm.insert( pair<string,int>(string("C++"), 3 ));
	mm.insert( pair<string,int>(string("Java"), 4 ));
	
	cout << "count: " << mm.size() << endl;
	// —v‘f‚ğíœ‚·‚é
	mm.erase(string("C++"));
	cout << "count: " << mm.size() << endl;
}

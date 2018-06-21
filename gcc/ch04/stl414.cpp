#include <iostream>
#include <map>
#include <string>
using namespace std;

int main( void )
{
	map <string, int> m;
	m.insert( pair<string,int>(string("C"), 1 ));
	m.insert( pair<string,int>(string("C++"), 2 ));
	m.insert( pair<string,int>(string("Java"), 3 ));
	
	cout << "count: " << m.size() << endl;
	// 要素を削除する
	m.erase(string("Java"));
	cout << "count: " << m.size() << endl;

	multimap <string, int> mm;
	mm.insert( pair<string,int>(string("C"), 1 ));
	mm.insert( pair<string,int>(string("C++"), 2 ));
	mm.insert( pair<string,int>(string("C++"), 3 ));
	mm.insert( pair<string,int>(string("Java"), 4 ));
	
	cout << "count: " << mm.size() << endl;
	// 要素を削除する
	mm.erase(string("C++"));
	cout << "count: " << mm.size() << endl;
}

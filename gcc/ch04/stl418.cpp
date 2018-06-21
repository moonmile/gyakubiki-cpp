#include <iostream>
#include <map>
#include <string>
#include <string.h>

using namespace std;

int main( void )
{
	map <string, int> m1;
	m1.insert( pair<string,int>(string("C"), 1 ));
	m1.insert( pair<string,int>(string("C++"), 2 ));
	m1.insert( pair<string,int>(string("Java"), 3 ));
	m1.insert( pair<string,int>("c++", 2 ));
	// 大文字小文字を比較するために4要素になる
	cout << "count: " << m1.size() << endl;
	
	// 比較関数を作成
	struct comp {
		bool operator() ( const string& left, const string& right )
		{
			return strcasecmp( left.c_str(), right.c_str()) < 0;
		}
	};
		
	map <string, int, comp> m2;
	m2.insert( pair<string,int>(string("C"), 1 ));
	m2.insert( pair<string,int>(string("C++"), 2 ));
	m2.insert( pair<string,int>(string("Java"), 3 ));
	m2.insert( pair<string,int>("c++", 2 ));
	// 大文字小文字を区別しないため3要素になる
	cout << "count: " << m2.size() << endl;
}

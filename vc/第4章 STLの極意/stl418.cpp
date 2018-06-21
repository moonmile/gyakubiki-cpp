#include <iostream>
#include <map>
#include <string>
using namespace std;

void main( void )
{
	map <string, int> m1;
	m1.insert( pair<string,int>(string("C"), 1 ));
	m1.insert( pair<string,int>(string("C++"), 2 ));
	m1.insert( pair<string,int>(string("Java"), 3 ));
	m1.insert( pair<string,int>("c++", 2 ));
	// �啶�����������r���邽�߂�4�v�f�ɂȂ�
	cout << "count: " << m1.size() << endl;
	
	// ��r�֐����쐬
	struct comp {
		bool operator() ( const string& left, const string& right )
		{
			return stricmp( left.c_str(), right.c_str()) < 0;
		}
	};
		
	map <string, int, comp> m2;
	m2.insert( pair<string,int>(string("C"), 1 ));
	m2.insert( pair<string,int>(string("C++"), 2 ));
	m2.insert( pair<string,int>(string("Java"), 3 ));
	m2.insert( pair<string,int>("c++", 2 ));
	// �啶������������ʂ��Ȃ�����3�v�f�ɂȂ�
	cout << "count: " << m2.size() << endl;
}

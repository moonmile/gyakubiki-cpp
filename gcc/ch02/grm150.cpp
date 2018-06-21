#include <iostream>
#include <strstream>
#include <string>
#include <exception>
using namespace std;

class my_error : public exception {
private:
	string _what;
	int    _line;
	string _file;
public:
	my_error( const char *file, int line, const string &what ) {
		_file = file;
		_line = line;
		_what = what; }
	virtual const char *what() const noexcept { 
		strstream s;
		s << _file << ":" << _line << " " << _what << ends;
		return s.str(); }
};


class Base {
private:
	int m_val;
public:
	Base() { m_val = 0; }
	
	int getValue() { return m_val; }
	int setValue( int v ) {
		if ( v < 0 || v > 10 ) 
			throw my_error( __FILE__, __LINE__, "parameter must be between 0 and 9.");
		return m_val = v; }
	int addValue( int v ) {
		if ( m_val+v < 0 || m_val+v > 10 ) 
			throw my_error( __FILE__, __LINE__, "overflow value.");
		return m_val += v; }
};

int main( void )
{
	Base a;
	
	// 例外が発生
	try {
		a.setValue(5);
		a.addValue(10);
		cout << "a.getValue: " << a.getValue() << endl;
	} catch ( my_error e ) {
		cout << "Exception: " << e.what() << endl;
	}
}	


#include <string>
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
using namespace std;

class SampleStr
{
	string m_val;
public:
	SampleStr() { m_val = ""; }
	
	string get() { return m_val; }
	string set( string s ) { return m_val = s; }
	string set( char *s ) { m_val = s; return m_val; }
	string add( string s ) { m_val += s; return m_val; }
	string add( char *s ) { m_val += s; return m_val; }
};

class TestSampleStr : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TestSampleStr );	// テストクラスを登録
	CPPUNIT_TEST( testSet );
	CPPUNIT_TEST( testAdd );
	CPPUNIT_TEST_SUITE_END();
protected:
	void testSet()
	{
		SampleStr a;
		CPPUNIT_ASSERT_EQUAL( string("hello"), a.set("hello"));
		CPPUNIT_ASSERT_EQUAL( string("world"), a.set("world"));
	}
	void testAdd() 
	{
		SampleStr a;
		CPPUNIT_ASSERT_EQUAL( string("hello"), a.add("hello"));
		CPPUNIT_ASSERT_EQUAL( string("hello "), a.add(" "));
		CPPUNIT_ASSERT_EQUAL( string("hello world"), a.add("world"));
	}
	
};
// テストスイートに登録
CPPUNIT_TEST_SUITE_REGISTRATION( TestSampleStr );


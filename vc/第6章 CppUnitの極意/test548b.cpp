#include <string>
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
using namespace std;

class SampleChar
{
	string m_val;
public:
	SampleChar() { m_val = ""; }
	
	const char *get() { return m_val.c_str(); }
	const char *set( char *s ) { m_val = s; return m_val.c_str(); }
	const char *add( char *s ) { m_val += s; return m_val.c_str(); }
};

class TestSampleChar : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TestSampleChar );	// テストクラスを登録
	CPPUNIT_TEST( testSet );
	CPPUNIT_TEST( testAdd );
	CPPUNIT_TEST_SUITE_END();
protected:
	void testSet()
	{
		SampleChar a;
		CPPUNIT_ASSERT( strcmp( "", a.get()) == 0 );
		CPPUNIT_ASSERT( strcmp( "hello", a.set("hello")) == 0 );
		CPPUNIT_ASSERT( strcmp( "world", a.set("world")) == 0 );
	}
	void testAdd() 
	{
		SampleChar a;
		CPPUNIT_ASSERT( strcmp( "", a.get()) == 0 );
		CPPUNIT_ASSERT( strcmp( "hello", a.add("hello")) == 0 );
		CPPUNIT_ASSERT( strcmp( "hello world", a.add(" world")) == 0 );
	}
	
};
// テストスイートに登録
CPPUNIT_TEST_SUITE_REGISTRATION( TestSampleChar );


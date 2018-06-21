#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

class Sample 
{
	int m_val;
public:
	Sample() { m_val = 0; }
	
	int set( int val ) { return m_val = val; }
	int get() { return m_val; }
	int add( int val ) { return m_val += val; }
};

class TestSample : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TestSample );	// テストクラスを登録
	CPPUNIT_TEST( testSet );			
	CPPUNIT_TEST( testAdd );			
	CPPUNIT_TEST_SUITE_END();
protected:
	void testSet();
	void testAdd();
};
// テストスイートに登録
CPPUNIT_TEST_SUITE_REGISTRATION( TestSample );

void TestSample::testSet()
{
	Sample a;
	CPPUNIT_ASSERT( a.get() == 0 );
	CPPUNIT_ASSERT( a.set(1) == 1 );
}
void TestSample::testAdd()
{
	CPPUNIT_FAIL("未実装");
}

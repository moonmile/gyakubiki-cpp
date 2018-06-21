#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

class SampleVal
{
	int m_val;
public:
	SampleVal() { m_val = 0; }
	
	int get() { return m_val; }
	int set( int val ) { return m_val = val; }
	int mul( int val ) { return m_val *= val; }
	
};

class TestSampleVal : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TestSampleVal );	// テストクラスを登録
	CPPUNIT_TEST( testSet );
	CPPUNIT_TEST( testMul );
	CPPUNIT_TEST_SUITE_END();
	
	SampleVal *val;

public:
	// テストメソッド実行時の前処理
	void setUp() { val = new SampleVal(); }
	// テストメソッド実行時の後処理
	void tearDown() { delete val; }
		
protected:

	void testSet()
	{
		CPPUNIT_ASSERT_EQUAL( val->get(), 0 );
		val->set( 10 );
		CPPUNIT_ASSERT_EQUAL( val->get(), 10 );
	}
	void testMul() 
	{
		CPPUNIT_ASSERT_EQUAL( val->get(), 0 );
		CPPUNIT_ASSERT_EQUAL( val->set(10), 10 );
		CPPUNIT_ASSERT_EQUAL( val->mul(2), 20 );
	}
	
};
// テストスイートに登録
CPPUNIT_TEST_SUITE_REGISTRATION( TestSampleVal );


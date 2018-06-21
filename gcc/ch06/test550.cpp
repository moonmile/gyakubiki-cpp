#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

class SampleVal
{
    double m_val;
public:
	SampleVal() { m_val = 0; }
	
	double get() { return m_val; }
	double set( double val ) { return m_val = val; }
	double div( double val ) { return m_val /= val; }
};

class TestSampleVal : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TestSampleVal );	// テストクラスを登録
	CPPUNIT_TEST( testSet );
	CPPUNIT_TEST( testDiv );
	CPPUNIT_TEST_SUITE_END();
protected:
	void testSet()
	{
		SampleVal a;
		CPPUNIT_ASSERT_DOUBLES_EQUAL( 0, a.get(), 0  );
		a.set( 10 );
		CPPUNIT_ASSERT_DOUBLES_EQUAL( 10, a.get(), 0 );
	}
	void testDiv() 
	{
		SampleVal a;
		CPPUNIT_ASSERT_DOUBLES_EQUAL( 0, a.get(), 0 );
		CPPUNIT_ASSERT_DOUBLES_EQUAL( 10, a.set(10), 0 );
		CPPUNIT_ASSERT_DOUBLES_EQUAL( 3.33, a.div(3), 0.01 );
	}
	
};
// テストスイートに登録
CPPUNIT_TEST_SUITE_REGISTRATION( TestSampleVal );


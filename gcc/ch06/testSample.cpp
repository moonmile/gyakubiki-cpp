#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

class TestSample  : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TestSample );
	CPPUNIT_TEST( testMethod );
	CPPUNIT_TEST_SUITE_END();
public:

protected:
	void testMethod();
};

CPPUNIT_TEST_SUITE_REGISTRATION( TestSample );

void TestSample::testMethod()
{
	
}


#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

class TestSample : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TestSample );	// テストクラスを登録
	CPPUNIT_TEST_FAIL( testMethodFail );
	CPPUNIT_TEST_SUITE_END();
public:

protected:
	void testMethodFail(){ 
		CPPUNIT_ASSERT( false );	// 異常
	}
};
// テストスイートに登録
CPPUNIT_TEST_SUITE_REGISTRATION( TestSample );


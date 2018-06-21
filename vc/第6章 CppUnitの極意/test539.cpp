#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

class TestSample : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TestSample );	// テストクラスを登録
	CPPUNIT_TEST( testMethod );
	CPPUNIT_TEST_SUITE_END();
public:

protected:
	void testMethod(){ 
		CPPUNIT_ASSERT( false );		// 正常終了
	}
};
// テストスイートに登録
CPPUNIT_TEST_SUITE_REGISTRATION( TestSample );


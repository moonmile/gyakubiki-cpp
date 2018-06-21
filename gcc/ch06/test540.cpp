#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

class TestSampleException : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TestSampleException );	// テストクラスを登録
	CPPUNIT_TEST_EXCEPTION( testMethodException, int );
	CPPUNIT_TEST_SUITE_END();
public:

protected:
	void testMethodException(){
		throw -1;					// 例外が発生する場合
	}
};
// テストスイートに登録
CPPUNIT_TEST_SUITE_REGISTRATION( TestSampleException );

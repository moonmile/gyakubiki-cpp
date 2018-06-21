#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

class TestSample : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TestSample );	// テストクラスを登録
	CPPUNIT_TEST( testMethod );
	CPPUNIT_TEST_EXCEPTION( testMethodException, int );
	CPPUNIT_TEST_FAIL( testMethodFail );
	CPPUNIT_TEST_SUITE_END();
public:

protected:
	void testMethod(){ 
		CPPUNIT_ASSERT( true );		// 正常終了
	}
	void testMethodException(){
		throw -1;					// 例外が発生する場合
	}
	void testMethodFail(){ 
		CPPUNIT_ASSERT( false );	// 異常
	}
};
// テストスイートに登録
CPPUNIT_TEST_SUITE_REGISTRATION( TestSample );


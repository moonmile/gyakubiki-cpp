#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

class TestSample : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TestSample );	// テストクラスを登録
	CPPUNIT_TEST( testMethod1 );		// テストメソッドを登録
	CPPUNIT_TEST( testMethod2 );		// テストメソッドを登録
	CPPUNIT_TEST_SUITE_END();
public:

protected:
	void testMethod1();					// テストメソッド
	void testMethod2();					// テストメソッド
};

// テストスイートに登録
CPPUNIT_TEST_SUITE_REGISTRATION( TestSample );

// テストメソッド
void TestSample::testMethod1()
{
	// ここにテストを書く
}

// テストメソッド
void TestSample::testMethod2()
{
	// ここにテストを書く
}

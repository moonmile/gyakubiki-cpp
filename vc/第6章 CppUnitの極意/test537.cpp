#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

class TestSample2 : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TestSample2 );	// テストクラスを登録
	CPPUNIT_TEST( testMethod );			// テストメソッドを登録
	CPPUNIT_TEST_SUITE_END();
public:

protected:
	void testMethod();					// テストメソッド
};

// テストスイートに登録
CPPUNIT_TEST_SUITE_REGISTRATION( TestSample2 );

// テストメソッド
void TestSample2::testMethod()
{
	// ここにテストを書く
}


class TestSubSample2 : public TestSample2
{
	// テストクラスを登録
	CPPUNIT_TEST_SUB_SUITE( TestSubSample2, TestSample2 );	
	CPPUNIT_TEST( testSubMethod );		// テストメソッドを登録
	CPPUNIT_TEST_SUITE_END();
public:

protected:
	void testSubMethod();				// テストメソッド
};
	
CPPUNIT_TEST_SUITE_REGISTRATION( TestSubSample2 );

// テストメソッド
void TestSubSample2::testSubMethod()
{
	;
}


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
	void testSet();		// Sample::set のテスト
	void testAdd();		// Sample::add のテスト
};
// テストスイートに登録
CPPUNIT_TEST_SUITE_REGISTRATION( TestSample );

void TestSample::testSet()
{
	Sample a;
	// 初期値が 0 であること
	CPPUNIT_ASSERT( a.get() == 0 );
	// 値を設定
	a.set(1);	
	CPPUNIT_ASSERT( a.get() == 1 );

	// 別のインスタンスを作成しても他へ影響しないこと
	Sample b;
	CPPUNIT_ASSERT( b.get() == 0 );
	CPPUNIT_ASSERT( a.get() == 1 );
}

void TestSample::testAdd()
{
	Sample a;
	// 初期値が 0 であること
	CPPUNIT_ASSERT( a.get() == 0 );
	// 値を
	a.set(1);	
	CPPUNIT_ASSERT( a.get() == 1 );
	a.add(1);
	CPPUNIT_ASSERT( a.get() == 2 );

	a.add(1);
	CPPUNIT_ASSERT( a.get() != 3 );	// 失敗させてみる
}


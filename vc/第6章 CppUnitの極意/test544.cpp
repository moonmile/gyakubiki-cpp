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
	CPPUNIT_TEST_SUITE( TestSampleVal );	// �e�X�g�N���X��o�^
	CPPUNIT_TEST( testSet );
	CPPUNIT_TEST( testMul );
	CPPUNIT_TEST_SUITE_END();
	
	SampleVal *val;

public:
	// �e�X�g���\�b�h���s���̑O����
	void setUp() { val = new SampleVal(); }
	// �e�X�g���\�b�h���s���̌㏈��
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
// �e�X�g�X�C�[�g�ɓo�^
CPPUNIT_TEST_SUITE_REGISTRATION( TestSampleVal );


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
	CPPUNIT_TEST_SUITE_END();
protected:
	void testSet()
	{
		SampleVal a;
		CPPUNIT_ASSERT_EQUAL( a.get(), 0 );
		a.set( 10 );
		CPPUNIT_ASSERT_EQUAL_MESSAGE( "�v���Ӎ���", a.get(), 0 );
	}
};
// �e�X�g�X�C�[�g�ɓo�^
CPPUNIT_TEST_SUITE_REGISTRATION( TestSampleVal );


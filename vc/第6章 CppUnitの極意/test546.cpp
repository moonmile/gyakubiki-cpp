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
	CPPUNIT_TEST_SUITE( TestSample );	// �e�X�g�N���X��o�^
	CPPUNIT_TEST( testSet );			
	CPPUNIT_TEST_SUITE_END();
protected:
	void testSet();		// Sample::set �̃e�X�g
};
// �e�X�g�X�C�[�g�ɓo�^
CPPUNIT_TEST_SUITE_REGISTRATION( TestSample );

void TestSample::testSet()
{
	Sample a;
	CPPUNIT_ASSERT( a.get() == 0 );
	CPPUNIT_ASSERT_MESSAGE( "�v�`�F�b�N", a.set(1) != 1 );	// ���s������
}

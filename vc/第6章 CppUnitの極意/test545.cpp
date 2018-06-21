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
	CPPUNIT_TEST( testAdd );
	CPPUNIT_TEST_SUITE_END();
protected:
	void testSet();		// Sample::set �̃e�X�g
	void testAdd();		// Sample::add �̃e�X�g
};
// �e�X�g�X�C�[�g�ɓo�^
CPPUNIT_TEST_SUITE_REGISTRATION( TestSample );

void TestSample::testSet()
{
	Sample a;
	// �����l�� 0 �ł��邱��
	CPPUNIT_ASSERT( a.get() == 0 );
	// �l��ݒ�
	a.set(1);	
	CPPUNIT_ASSERT( a.get() == 1 );

	// �ʂ̃C���X�^���X���쐬���Ă����։e�����Ȃ�����
	Sample b;
	CPPUNIT_ASSERT( b.get() == 0 );
	CPPUNIT_ASSERT( a.get() == 1 );
}

void TestSample::testAdd()
{
	Sample a;
	// �����l�� 0 �ł��邱��
	CPPUNIT_ASSERT( a.get() == 0 );
	// �l��
	a.set(1);	
	CPPUNIT_ASSERT( a.get() == 1 );
	a.add(1);
	CPPUNIT_ASSERT( a.get() == 2 );

	a.add(1);
	CPPUNIT_ASSERT( a.get() != 3 );	// ���s�����Ă݂�
}


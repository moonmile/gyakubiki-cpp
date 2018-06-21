#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

class TestSample : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TestSample );	// �e�X�g�N���X��o�^
	CPPUNIT_TEST( testMethod );
	CPPUNIT_TEST_EXCEPTION( testMethodException, int );
	CPPUNIT_TEST_FAIL( testMethodFail );
	CPPUNIT_TEST_SUITE_END();
public:

protected:
	void testMethod(){ 
		CPPUNIT_ASSERT( true );		// ����I��
	}
	void testMethodException(){
		throw -1;					// ��O����������ꍇ
	}
	void testMethodFail(){ 
		CPPUNIT_ASSERT( false );	// �ُ�
	}
};
// �e�X�g�X�C�[�g�ɓo�^
CPPUNIT_TEST_SUITE_REGISTRATION( TestSample );


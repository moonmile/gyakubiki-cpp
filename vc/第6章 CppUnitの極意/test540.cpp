#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

class TestSampleException : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TestSampleException );	// �e�X�g�N���X��o�^
	CPPUNIT_TEST_EXCEPTION( testMethodException, int );
	CPPUNIT_TEST_SUITE_END();
public:

protected:
	void testMethodException(){
		throw -1;					// ��O����������ꍇ
	}
};
// �e�X�g�X�C�[�g�ɓo�^
CPPUNIT_TEST_SUITE_REGISTRATION( TestSampleException );

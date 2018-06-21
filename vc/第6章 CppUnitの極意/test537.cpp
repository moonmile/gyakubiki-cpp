#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>

class TestSample2 : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TestSample2 );	// �e�X�g�N���X��o�^
	CPPUNIT_TEST( testMethod );			// �e�X�g���\�b�h��o�^
	CPPUNIT_TEST_SUITE_END();
public:

protected:
	void testMethod();					// �e�X�g���\�b�h
};

// �e�X�g�X�C�[�g�ɓo�^
CPPUNIT_TEST_SUITE_REGISTRATION( TestSample2 );

// �e�X�g���\�b�h
void TestSample2::testMethod()
{
	// �����Ƀe�X�g������
}


class TestSubSample2 : public TestSample2
{
	// �e�X�g�N���X��o�^
	CPPUNIT_TEST_SUB_SUITE( TestSubSample2, TestSample2 );	
	CPPUNIT_TEST( testSubMethod );		// �e�X�g���\�b�h��o�^
	CPPUNIT_TEST_SUITE_END();
public:

protected:
	void testSubMethod();				// �e�X�g���\�b�h
};
	
CPPUNIT_TEST_SUITE_REGISTRATION( TestSubSample2 );

// �e�X�g���\�b�h
void TestSubSample2::testSubMethod()
{
	;
}


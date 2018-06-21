#include <afxwin.h>
#include <cppunit/ui/mfc/TestRunner.h>
#include <cppunit/extensions/TestFactoryRegistry.h>

class CTestApp : public CWinApp
{
public:
	CTestApp(){;}
public:
	virtual BOOL InitInstance();
};
	
CTestApp theApp;
BOOL CTestApp::InitInstance()
{
    CppUnit::MfcUi::TestRunner runner;
  	runner.addTest( 
		CppUnit::TestFactoryRegistry::getRegistry().makeTest());
    runner.run();
    return FALSE;
}

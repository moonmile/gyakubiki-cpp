#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/extensions/TestFactoryRegistry.h>

int main( void ) {
    CppUnit::TextUi::TestRunner runner;
  	runner.addTest( 
		CppUnit::TestFactoryRegistry::getRegistry().makeTest());
    runner.run();
}


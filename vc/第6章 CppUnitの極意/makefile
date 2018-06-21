CXX 	= cl 
CXXLD	= link /nologo
CPPUNIT_HOME = D:\work\‹tˆø‚«‘å‘SC++\cppunit-1.12.1
CPPUNIT_LIB  = $(CPPUNIT_HOME)\lib\cppunit.lib
CPPUNIT_INC  = $(CPPUNIT_HOME)\include
RUNNER  = testMain.obj

CPP_PROJ=/nologo /MD /EHsc /D "WIN32" /D "_WINDOWS" /D "_AFXDLL" /I$(CPPUNIT_INC)


all: \
	testMain.exe \
	test536.exe \
	test537.exe \
	test538.exe \
	test539.exe \
	test540.exe \
	test541.exe \
	test542.exe \
	test543.exe \
	test544.exe \
	test545.exe \
	test546.exe \
	test547.exe \
	test548.exe \
	test548a.exe \
	test548b.exe \
	test549.exe \
	test550.exe \
	test551.exe \
	test552.exe 


OBJS = 	testMain.obj testSample.obj

testMain.exe: $(OBJS) $(CPPUNIT_LIB)
	$(CXX) /Fe$@ $(OBJS) $(CPPUNIT_LIB)

test536.exe: test536.obj
	$(CXX) /nologo /Fe$@ $** $(CPPUNIT_LIB) $(RUNNER)
test537.exe: test537.obj
	$(CXX) /nologo /Fe$@ $** $(CPPUNIT_LIB) $(RUNNER)
test538.exe: test538.obj
	$(CXX) /nologo /Fe$@ $** $(CPPUNIT_LIB) $(RUNNER)
test539.exe: test539.obj
	$(CXX) /nologo /Fe$@ $** $(CPPUNIT_LIB) $(RUNNER)
test540.exe: test540.obj
	$(CXX) /nologo /Fe$@ $** $(CPPUNIT_LIB) $(RUNNER)
test541.exe: test541.obj
	$(CXX) /nologo /Fe$@ $** $(CPPUNIT_LIB) $(RUNNER)
test542.exe: test542.obj
	$(CXX) /nologo /Fe$@ $** $(CPPUNIT_LIB) $(RUNNER)
test543.exe: test543.obj
	$(CXX) /nologo /Fe$@ $** $(CPPUNIT_LIB) $(RUNNER)
test544.exe: test544.obj
	$(CXX) /nologo /Fe$@ $** $(CPPUNIT_LIB) $(RUNNER)
test545.exe: test545.obj
	$(CXX) /nologo /Fe$@ $** $(CPPUNIT_LIB) $(RUNNER)
test546.exe: test546.obj
	$(CXX) /nologo /Fe$@ $** $(CPPUNIT_LIB) $(RUNNER)
test547.exe: test547.obj
	$(CXX) /nologo /Fe$@ $** $(CPPUNIT_LIB) $(RUNNER)
test548.exe: test548.obj
	$(CXX) /nologo /Fe$@ $** $(CPPUNIT_LIB) $(RUNNER)
test548a.exe: test548a.obj
	$(CXX) /nologo /Fe$@ $** $(CPPUNIT_LIB) $(RUNNER)
test548b.exe: test548b.obj
	$(CXX) /nologo /Fe$@ $** $(CPPUNIT_LIB) $(RUNNER)
test549.exe: test549.obj
	$(CXX) /nologo /Fe$@ $** $(CPPUNIT_LIB) $(RUNNER)
test550.exe: test550.obj
	$(CXX) /nologo /Fe$@ $** $(CPPUNIT_LIB) $(RUNNER)
test551.exe: test551.obj
	$(CXX) /nologo /Fe$@ $** $(CPPUNIT_LIB) 


test552.obj: test552.cpp
	$(CXX) /nologo /c $(CPP_PROJ) test552.cpp
test552.exe: test552.obj 
	$(CXXLD) /out:$@ /subsystem:windows test552.obj testSample.obj $(CPPUNIT_LIB) $(CPPUNIT_HOME)\lib\testrunner.lib 

clean: 
	del *.exe *.obj *.exe.manifest

.cpp.obj:
	$(CXX) /c /nologo /EHsc /MD $< /I$(CPPUNIT_INC)


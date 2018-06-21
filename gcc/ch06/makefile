CC		= gcc
CXX 	= g++ 
CXXFLAGS = -std=c++17 -Wformat=0

ALL = testMain \
	test536 \
	test537 \
	test538 \
	test539 \
	test540 \
	test541 \
	test542 \
	test543 \
	test544 \
	test545 \
	test546 \
	test547 \
	test548 \
	test548a \
	test548b \
	test549 \
	test550 \
	test551 
	
all: $(ALL)

testMain: testMain.o testSample.o
	$(CXX) -o $@ $^ -lcppunit -ldl

test536: testMain.o test536.o
	$(CXX) -o $@ $^ -lcppunit -ldl
test537: testMain.o test537.o
	$(CXX) -o $@ $^ -lcppunit -ldl
test538: testMain.o test538.o
	$(CXX) -o $@ $^ -lcppunit -ldl
test539: testMain.o test539.o
	$(CXX) -o $@ $^ -lcppunit -ldl
test540: testMain.o test540.o
	$(CXX) -o $@ $^ -lcppunit -ldl
test541: testMain.o test541.o
	$(CXX) -o $@ $^ -lcppunit -ldl
test542: testMain.o test542.o
	$(CXX) -o $@ $^ -lcppunit -ldl
test543: testMain.o test543.o
	$(CXX) -o $@ $^ -lcppunit -ldl
test544: testMain.o test544.o
	$(CXX) -o $@ $^ -lcppunit -ldl
test545: testMain.o test545.o
	$(CXX) -o $@ $^ -lcppunit -ldl
test546: testMain.o test546.o
	$(CXX) -o $@ $^ -lcppunit -ldl
test547: testMain.o test547.o
	$(CXX) -o $@ $^ -lcppunit -ldl
test548: testMain.o test548.o
	$(CXX) -o $@ $^ -lcppunit -ldl
test548a: testMain.o test548a.o
	$(CXX) -o $@ $^ -lcppunit -ldl
test548b: testMain.o test548b.o
	$(CXX) -o $@ $^ -lcppunit -ldl
test549: testMain.o test549.o
	$(CXX) -o $@ $^ -lcppunit -ldl
test550: testMain.o test550.o
	$(CXX) -o $@ $^ -lcppunit -ldl
test551: test551.o
	$(CXX) -o $@ $^ -lcppunit -ldl

clean: 
	$(RM) *.o $(ALL) 
 
.SUFFIXES: .o .cpp .c
.c.o:
	$(CC) -c $<
.cpp.o:
	$(CXX) $(CXXFLAGS) -c $<
.c:
	$(CC) -o $@ $<
.cpp:
	$(CXX) $(CXXFLAGS) -o $@ $<
	

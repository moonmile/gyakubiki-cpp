CC		= gcc
CXX 	= g++ 
CXXFLAGS = -std=c++14

ALL 	= 	basic003 	\
			basic003a 	\
			basic004	\
			basic004a 	

all:$(ALL)

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

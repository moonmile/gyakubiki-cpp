CC		= gcc
CXX 	= g++ 
CXXFLAGS = -std=c++14 -Wformat=0

ALL = net497 \
	net498 \
	net500 \
	net501 \
	net502 \
	net503g \
	net504g \
	net505 \
	net506g \
	net507 \
	net508 \
	net509 \
	net510 \
	net512 \
	net513 \
	net514 \
	net515 \
	net516 \
	net517 \
	net518 \
	net519 \
	net520 \
	net521 \
	net522 \
	net523 \
	net524 \
	net525 \
	net526 \
	net527 \
	net528 \
	net529 \
	net530 \
	net531 \
	net532 \
	net533 \
	net534 

all: $(ALL)

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
	

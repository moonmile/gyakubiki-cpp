target = sample
cxx = g++
objs = main.o func1.o func2.o

all: $(target)

$(target): $(objs)
    $(cxx) -o $(target) $^
main.o: main.cpp func1.h func2.h

.SUFFIXES: .o .cpp
.cpp.o:
    $(cxx) -c $<

clean:
    rm -f *.o sample

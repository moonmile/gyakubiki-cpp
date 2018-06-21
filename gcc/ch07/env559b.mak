target = sample
cxx = g++
objs = main.o func1.o func2.o

all: $(target)

$(target): $(objs)
    $(cxx) -o $(target) $^
main.o: main.cpp func1.h func2.h
    $(cxx) -c $<
func1.o: func1.cpp
    $(cxx) -c $<
func2.o: func2.cpp
    $(cxx) -c $<
clean:
    rm -f *.o sample

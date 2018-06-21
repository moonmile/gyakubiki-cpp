target = sample
cxx = g++
objs = main.o func1.o func2.o
all: $(target)

$(target): $(objs)
    $(cxx) -o $(target) $(objs)
main.o: main.cpp func1.h func2.h
    $(cxx) -c main.cpp
func1.o: func1.cpp
    $(cxx) -c func1.cpp
func2.o: func2.cpp
    $(cxx) -c func2.cpp

clean:
    rm -f *.o sample

ALL: sample

sample: main.o func1.o func2.o
    g++ -o sample main.o func1.o func2.o
main.o: main.cpp func1.h func2.h
    g++ -c main.cpp
func1.o: func1.cpp
    g++ -c func1.cpp
func2.o: func2.cpp
    g++ -c func2.cpp
clean:
    rm -f sample *.o

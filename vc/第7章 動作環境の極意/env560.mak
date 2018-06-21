ALL: sample.exe

sample.exe: main.obj func1.obj func2.obj
    cl /Fesample.exe main.obj func1.obj func2.obj
main.obj: main.cpp func1.h func2.h
    cl /c /EHsc main.cpp
func1.obj: func1.cpp
    cl /c /EHsc func1.cpp
func2.obj: func2.cpp
    cl /c /EHsc func2.cpp

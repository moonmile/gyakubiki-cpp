CXX = cl
TARGET = sample.exe
OBJS = main.obj func1.obj func2.obj
CPPFLAGS = /EHsc

ALL: $(TARGET)

$(TARGET): $(OBJS)
    $(CXX) /Fe$(TARGET) $(OBJS)
main.obj: main.cpp func1.h func2.h
    $(CXX) /c $(CPPFLAGS) main.cpp
func1.obj: func1.cpp
    $(CXX) /c $(CPPFLAGS) func1.cpp
func2.obj: func2.cpp
     $(CXX) /c $(CPPFLAGS) func2.cpp

CXX 	= cl 

all:basic003.exe \
	basic003a.exe \
	basic004.exe \
	basic004a.exe 



clean: 
	del *.exe *.obj

.cpp.exe:
	$(CXX) /nologo /EHsc $<
.c.exe:
	$(CXX) /nologo /EHsc $<
	
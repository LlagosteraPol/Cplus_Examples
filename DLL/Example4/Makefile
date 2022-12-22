

all: mult.dll


mult.dll : multdll.o
	g++ -shared -o multdll.dll multdll.o 

mult.o : mult.cpp
	g++ -c -MULTDLL_API multdll.cpp


clean:
	rm -f *.o *.dll *.exe
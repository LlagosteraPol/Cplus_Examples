

all: simpledll.dll


simpledll.dll : simpledll.o
	g++ -shared -o simpledll.dll simpledll.o 

example_dll.o : example_dll.cpp
	g++ -c -SIMPLEDLL_API simpledll.cpp


clean:
	rm -f *.o *.dll *.exe
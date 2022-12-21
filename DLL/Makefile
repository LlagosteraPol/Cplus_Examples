

all: example_dll.dll call_example_dll


example_dll.dll : example_dll.o
	g++ -shared -o example_dll.dll example_dll.o 

example_dll.o : example_dll.cpp
	g++ -c -DBUILDING_EXAMPLE_DLL example_dll.cpp

call_example_dll : call_example_dll.cpp
	g++ -c call_example_dll.cpp
	g++ -o call_example_dll.exe call_example_dll.o -L. -l example_dll


clean:
	rm -f *.o *.dll *.exe
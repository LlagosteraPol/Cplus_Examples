
all: library.a main

# Create shared .SO library
library.a : liblibrary.so
	gcc -shared -o liblibrary.so library.o

#Convert library code to Object file
liblibrary.so : library.cpp
	g++ -std=c++14 -c -fPIC -o library.o library.cpp



# Create the executable by linking shared library
# gcc -L<path to .SO file> -Wall -o code main.c -l<library name>

# Make shared library available at runtime
# export LD_LIBRARY_PATH=<path to .SO file>:$LD_LIBRARY_PATH

# This will create the executable a.out which will run on any compatible machine with the library files (.SO). 
# The 'lib' in the front and the '.so' at the back of the file are assumed. $(pwd) or .  means 'current directory'
main : main.cpp
	g++ -L. -Wall -o code main.cpp -llibrary 
# To help the executable find the shared library, set the LD_LIBRARY_PATH to the path of the .SO file.
# export LD_LIBRARY_PATH=$(pwd):$LD_LIBRARY_PATH

clean:
	rm -f *.o *.so

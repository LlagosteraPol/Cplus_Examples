#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>

int createFile(const char* filename, const char* input)
{
    std::string filename_str = filename;
    std::string input_str = input;

    std::fstream file;
    file.open(filename_str + ".txt", std::ios_base::out);

    if(!file.is_open())
    {
        std::cout<<"Unable to open the file.\n";
        return -1;
    }

    std::string myStr = "Hi! We are Java2Blog. Follow us for learning more!";

    file<<input_str;

    file.close();
    return 0;
}


int main()
{
   createFile("testFile", "Hello World");
}

#include <algorithm>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

int main()
{
    fstream file;
    string line, value;
    

    file.open("data.txt", fstream::in);

    if(file.is_open() == false) printf("\nError de lectura de fitxer\n");
    else
    {
        std::vector<std::string> data;
        while(getline(file, line)){
            data.clear();
            string code;

            line.erase(std::remove(line.begin(), line.end(), '\r'), line.end());

            std::stringstream ss(line);

            while (ss.good()) {
                std::string value;
                std::getline(ss, value, '|');
                data.push_back(value);
            }
        
            for(int i = 0; i< data.size(); i++){
                std::cout << data[i] << ", ";
            }
            std::cout << std::endl;

            code = data[1];
            std::transform(code.begin(), code.end(), code.begin(),
        [](unsigned char c){ return std::tolower(c); });

        std::cout << "Code is: " + code << std::endl;
        }
    }
        
    return 0;
}
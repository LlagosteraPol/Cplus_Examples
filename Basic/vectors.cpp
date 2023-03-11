#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define M 3
#define N 4

template<class T>
void printVector(std::vector<std::vector<T>> const &matrix) {
    for (std::vector<T> row: matrix)
    {
        for (T val: row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}



int main()
{
   // specify the default value to fill the vector elements
   int default_value = 1;
 
   // first, initialize a vector of ints with a given default value
   std::vector<int> v(N, default_value);
 
   // Use the above vector to initialize the two-dimensional vector
   // using the fill constructor
   std::vector<std::vector<int>> matrix(M, v);
 
   // print the two-dimensional vector
   printVector(matrix);

   std::cout << "------------------------------------------" << std::endl;

   // input array
   int src[5] = { 1, 2, 3, 4, 5 };
 
   std::vector<int> dest(std::begin(src), std::end(src));
   for (int i: dest) {
      std::cout << i << " ";
   }
    std::cout << std::endl;
   std::cout << "------------------------------------------" << std::endl;
   string src2[2][3] = 
   { 
      {"H", "i"}, 
      {"H", "o", "o" }
   };

   vector<vector<string>> vec = {vector<string>(std::begin(src2[0]), std::end(src2[0])), 
                                 vector<string>(std::begin(src2[1]), std::end(src2[1]))};

   for (auto row : vec)
    for (auto elem : row)
        cout << elem << " "; // cout: hey what up how you doin

   return 0;
}


#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
   map<string, string> test;
   test["First"] = "val_first";
    
   map<string, vector<string>> test2;
   test2["First"] = {"val_first"};
     
     
   if(test2["First"].empty()){
      cout << "Is empty" << endl;
      test2["First"] = {"val_first"};
   } 
   else{
      cout << "Not empty" << endl;
      test2["First"].push_back("val_second");
   }
   
   
   for(string word : test2["First"])
      cout<<word + ", ";

   return 0;
}
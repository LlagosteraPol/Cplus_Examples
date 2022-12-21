#include <stdio.h>
#include <windows.h>

#include "example_dll.h"

void __stdcall hello(const char *s)
{
        printf("Hello %s\n", s);
}
int Double(int x)
{
        return 2 * x;
}
void CppFunc(void)
{
        puts("CppFunc");
}
void MyClass::func(void)
{
        puts("MyClass.func()");
}

int MyClass::calcNum(int x){
        return x + 9999;
}

void MyClass::printNum(){
        printf("%d\n",this->calcNum(1));
}
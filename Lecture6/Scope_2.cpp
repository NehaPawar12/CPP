#include <iostream>
using namespace std;
#define pi = 3.123; // this is a macro.

int n = 12; // has a global scope and can be accessed in other functions as well.

int main()
{
    int a = 10; // has a local scope and cannot be accessed in any other fuction then the main.
    return 0;
}
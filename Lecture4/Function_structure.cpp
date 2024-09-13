#include <iostream>
using namespace std;

int print()
{
    cout << "Hello World!!\n";
    return 12;
}

int main()
{
    // print(); Here only Hello world will be printed and not the return value;
    cout << print();
    return 0;
}
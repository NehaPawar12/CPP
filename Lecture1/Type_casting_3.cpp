#include <iostream>
using namespace std;

int main()
{
    //Type conversion : Implicit : Done By Compiler.
    char ch = 'r';
    int val = ch;//ASCII Value is printed.
    cout<<val<<endl;

    //Type casting : Explicit : Done by Us.
    float num = 12.453;
    cout<<(int)num<<endl;//the integer value is printed.
    return 0;
}
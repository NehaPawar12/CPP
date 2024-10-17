#include <iostream>
using namespace std;

int main()
{
    int a = 9;
    int *p = &a;

    cout<<"a: "<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;

    
    return 0;
}
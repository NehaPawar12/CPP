#include <iostream>
using namespace std;

int main()
{
    float r = 12;
    float *ptr1 = &r;
    float **ptr2 = &ptr1;

    cout<<r<<endl;
    cout<<*ptr1<<endl;
    cout<<&r<<endl;
    cout<<*(*ptr2)<<endl;
    cout<<*ptr2<<endl;


    return 0;
}
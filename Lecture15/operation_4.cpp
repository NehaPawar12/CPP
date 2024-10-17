#include <iostream>
using namespace std;

int main()
{
    int v = 26;
    int *ptr = &v;

    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;
    ptr--;
    cout << ptr << endl
         << endl;

    cout << ptr + 2 << endl; //+8 byte;

    int *a;
    int *b = a + 4;
    cout << b - a << endl;

    cout << (b >= a) << endl;
    cout << (b != a) << endl;
    cout << (b == a) << endl;
    cout << (b <= a) << endl;
    // NULL Pointer
    // int ptr3 = NULL;
    // cout<<ptr3<<endl;

    return 0;
}
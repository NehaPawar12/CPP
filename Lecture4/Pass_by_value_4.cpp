#include <iostream>
using namespace std;

int print(int n)
{
    n *= 2;
    cout << "Inside Function: " << n << endl;
    return 0;
}

int main()
{
    int n = 4;
    print(n);

    cout << "Inside Main: " << n << endl; // the updation in print function do not affect the actual value.
    return 0;
}
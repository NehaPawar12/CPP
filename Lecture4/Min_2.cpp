#include <iostream>
using namespace std;

int minOf(int num1, int num2)
{
    return num1 > num2 ? num2 : num1;
}

int main()
{
    cout << "Minimum is: " << minOf(1, 3);
    return 0;
}
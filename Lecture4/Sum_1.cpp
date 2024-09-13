#include <iostream>
using namespace std;

int sum(int num1, int num2)
{
    int sum = num1 + num2;

    return sum;
}

int main()
{
    int ans = sum(12, 23);
    cout << ans;
    return 0;
}
#include <iostream>
using namespace std;

int digit(int num)
{
    int ans = 0;

    while (num != 0)
    {
        int digit = num % 10;

        ans += digit;

        num /= 10;
    }

    return ans;
}

int main()
{
    cout << "Digit Sum: " << digit(123);
    return 0;
}
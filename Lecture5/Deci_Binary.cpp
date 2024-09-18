#include <iostream>
using namespace std;

int convert(int n)
{
    int power = 1;
    int ans = 0;

    while (n > 0)
    {
        int rem = n % 2;
        n = n / 2;

        ans += (rem * power);
        power *= 10;
    }
    return ans;
}

int main()
{
    int num;
    cin >> num;

    cout << "Binary Number is: " << convert(num);
    return 0;
}
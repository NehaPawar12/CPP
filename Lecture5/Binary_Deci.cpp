#include <iostream>
using namespace std;

int convert(int n)
{
    int ans = 0;
    int pow = 1;

    while (n > 0)
    {
        int rem = n % 10;

        ans += (rem * pow);

        n = n / 10;
        pow *= 2;
    }
    return ans;
}

int main()
{
    int num;
    cin >> num;

    cout << "Decimal Number is: " << convert(num);
    return 0;
}
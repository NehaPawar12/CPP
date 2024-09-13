#include <iostream>
using namespace std;

int fibo(int n)
{
    int a = 0, b = 1;
    cout << a << " ";

    int next = 0;
    for (int i = 2; i <= n; i++)
    {
        a = b;
        b = next;
        next = a + b;

        cout << next << " ";
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;

    fibo(n);
    return 0;
}
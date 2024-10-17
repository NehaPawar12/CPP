#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    try
    {
        if (b == 0)
        {
            throw(b);
        }
        else
        {
            cout << "Output: " << a / b;
        }
    }
    catch (int a)
    {
        cout << "Exception: You can't give 0 as denominator";
    }

    return 0;
}
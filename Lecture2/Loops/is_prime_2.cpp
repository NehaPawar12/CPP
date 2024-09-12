#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    bool is_prime = true;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime == true)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }
    return 0;
}
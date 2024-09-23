#include <iostream>
using namespace std;

int linear(int arr[], int n, int x)
{
    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            index = i;
        }
    }
    return index;
}

int main()
{
    int n = 6;
    int arr[6] = {1, 5, 3, 2, 7};
    int x;
    cin >> x;

    cout << linear(arr, n, x);

    return 0;
}
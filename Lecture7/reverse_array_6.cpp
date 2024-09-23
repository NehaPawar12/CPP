#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int s = 0, e = n - 1;

    while (s < e)
    {
        swap(arr[s++], arr[e--]);
    }
}

int main()
{
    int arr[8] = {3, 5, 2, 1, 8, 6, 13, 12};
    int n = 8;

    reverse(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
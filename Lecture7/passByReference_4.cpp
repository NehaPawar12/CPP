#include <iostream>
using namespace std;

void pass(int arr[], int n)
{
    cout << endl
         << endl;

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * 2;
    }
}

int main()
{
    int arr[5] = {1, 23, 12, 2, 6};
    int n = 5;

    pass(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // changes are reflected in the main function.

    return 0;
}
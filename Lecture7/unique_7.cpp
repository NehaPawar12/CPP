#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    // cin >> n;

    int arr[10];

    // Input the array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Unique elements in the array are: ";

    // Nested loops to find unique elements
    for (int i = 0; i < n; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }
        // If element is unique, print it
        if (isUnique)
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}

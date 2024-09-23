#include <iostream>
using namespace std;

int main()
{
    int arr[20]; // Array creation.

    int marks[5] = {99, 87, 82, 95, 92}; // Array inisialization.

    cout << "Element at index 2: " << marks[2] << endl
         << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " "; // Accessing array elements.
    }

    cout << endl
         << endl
         << "The size of array is: " << sizeof(marks) / sizeof(int);
    return 0;
}

// Array goes from 0 to size-1.
// Size of array : sizeof(marks)/sizeof(int)
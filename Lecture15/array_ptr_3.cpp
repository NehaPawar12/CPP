#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {14, 12, 17, 26, 23};
    // int *a = arr;

    cout << *arr << endl; // will give the 1st element;
    cout << &arr << endl;
    cout << &arr + 1 << endl;

    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    return 0;
}
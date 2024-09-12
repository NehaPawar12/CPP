#include <iostream>
using namespace std;

int main()
{
    do
    {
        cout << "Hello";
    } while (3 > 5);

    return 0;
}

// We know 3 is not greater then 5, but here in do while loop condition is checked after the statement execution.
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch >= 65 && ch <= 90)
    {
        cout << "Uppercase";
    }

    else if (ch >= 97 && ch <= 122)
    {
        cout << "Lowercase";
    }
    return 0;
}

// Here implicit type conversion is used.
// Compiler automatically converts into required format.
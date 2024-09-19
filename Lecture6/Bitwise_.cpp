#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << endl
         << "AND: " << (a & b) << endl;
    cout << "OR: " << (a | b) << endl;
    cout << "XOR: " << (a ^ b) << endl;
    cout << "Left Shift: " << (a << b) << endl;
    cout << "Right shift: " << (a >> b) << endl;
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    cin >> age; //>>: is the extraction operator.

    cout << "The Age is: " << age; //<< : is the insertion operator.

    cin.ignore();
    string str;
    getline(cin, str);
    cout << endl
         << endl
         << "String is: " << str;


    //cin and cout are global objects.
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    cout << vec.size() << endl;

    vec.push_back(12);
    vec.push_back(23);
    cout << "Size after: " << vec.size() << endl;

    vec.push_back(14);
    vec.push_back(26);
    vec.push_back(17);

    for (auto itr : vec)
    {
        cout << itr << " ";
    }

    cout << endl
         << "Capacity: " << vec.capacity();

    vec.pop_back();
    cout << endl
         << "Size after POP: " << vec.size() << endl;

    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(2); // Other way to access elements;

    return 0;
}

// Indexing from 0;

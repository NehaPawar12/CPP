#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vector<int> vec2 = {1, 2, 4};

    vector<int> vec3(5, 1);

    for (int itr : vec2)
    {
        cout << itr << " ";
    }
    return 0;
}
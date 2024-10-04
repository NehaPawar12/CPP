#include <iostream>
using namespace std;

int main()
{
    int a1[5] = {2, 4, 1, 5, 8};
    int a2[5] = {1, 4, 6, 8, 3};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a1[i] == a2[j])
            {
                cout << a1[i] << " ";
                break;
            }
        }
    }

    return 0;
}

// The logic for intersection;
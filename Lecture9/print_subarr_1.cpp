#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {3, -2, 9, 8, 6, -1};

    for (int st = 0; st < 6; st++)
    {
        for (int end = st; end < 6; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }

        cout << endl;
    }
    return 0;
}
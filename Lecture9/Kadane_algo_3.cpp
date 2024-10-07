#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {1, 5, 7, -12, 23, 26};

    int curr = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < 6; i++)
    {
        curr += arr[i];
        maxSum = max(maxSum, curr);

        if (curr < 0)
        {
            curr = 0;
        }
    }

    cout << endl
         << "Max. SubArray sum is: " << maxSum << endl;
    return 0;
}
#include <iostream>
using namespace std;

int sumN(int num)
{
    int sum = 0;

    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int num;
    cin >> num;

    cout << "Sum is: " << sumN(num);
    return 0;
}

//Factorial calculating using function can be done as another practice question.
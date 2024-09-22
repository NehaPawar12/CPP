#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0, i=0;

    while(n!=0){
        int digit = n%10;

        if((ans>INT_MAX/10)|| (ans<INT_MIN/10)){
            return 0;
        }
        ans = digit + (ans*10);
        n = n/10;
        i++;
    }

    cout<<"Answer: "<<ans;
    return 0;
}
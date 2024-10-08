#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int target = 9;

    int arr[4] = {2, 7, 11, 15};

    vector<int> ans;

    for(int i=0; i<4; i++){
        for(int j=i+1; j<4; j++){
            if(arr[i]+ arr[j] == target){
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }

    
    return 0;
}
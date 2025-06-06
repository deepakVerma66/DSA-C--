#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    vector<int> nums = {-2,-3,4,-1,-2,1,5,-3};
    // This problem can be solved using two loops and trying every possible way T.C O(N) we will jump on some other approach

    int sum=0,maxi = INT_MIN;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        maxi = max(maxi,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi;
    
    return 0;
}
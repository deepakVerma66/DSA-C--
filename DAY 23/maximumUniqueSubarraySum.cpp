#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // vector<int> nums = {1,2,3,4,5};
    vector<int> nums = {1,2,-1,-2,1,0,-1};
    sort(nums.begin(),nums.end());

    int sum = 0, currEle = -1, i = nums.size()-1;
    while(nums[i]>0 && i>=0){
        if(nums[i]!=currEle){
            sum+=nums[i];
        }
        currEle = nums[i--];
    }
    cout<<sum;
    
    
    return 0;
}
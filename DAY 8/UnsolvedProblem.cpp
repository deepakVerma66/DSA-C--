#include<iostream>
#include<vector>
using namespace std;
// Leetcode problem 2111(Hard): Minimum operations to make array k increasing
int main()
{
    vector<int> nums = {4,1,5,2,6,2};
    int k=3,count=0;
    for(int i=k;i<nums.size();i++){
        if(!nums[i-k]<=nums[i]){
            nums[i] = nums[i-k]+1;
            count++;
        }
    }
    // for(int i=0;i<nums.size();i++){
    //     cout<<nums[i]<<" ";
    // }
    cout<<count-1;
    
    return 0;
}
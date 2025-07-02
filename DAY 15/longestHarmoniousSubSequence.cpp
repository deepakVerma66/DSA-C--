#include<iostream>
#include<vector>

// We define a harmonious array as an array where the difference between its maximum value and its minimum value is exactly 1.
// Given an integer array nums, return the length of its longest harmonious subsequence among all its possible subsequences.
// Example 1:
// Input: nums = [1,3,2,2,5,2,3,7]
// Output: 5

using namespace std;
int main()
{
    vector<int> nums = {1,2,3,4,5};
    int start = 0,newSubSeq = 0,count = 1,maxCount = 0;
    bool flag = false;
    for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[start] || nums[i]==nums[newSubSeq]){
            count++;
        }
        else if(nums[i]==nums[start]+1){
            count++;
            newSubSeq = i;
            flag=true;
            maxCount = max(count,maxCount);
        }
        else{
            if(nums[i]==nums[newSubSeq]+1){
                maxCount = max(count,maxCount);
                count-=newSubSeq-start+1;
                start = newSubSeq;
                newSubSeq = i;
            }
            else{
                start = i;
                newSubSeq = i;
                count = 1;
            }
        }
    }
    cout<<maxCount;
    
    return 0;
}
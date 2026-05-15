#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool containsDuplicates(vector<int> nums, int indexDiff, int valueDiff){
    unordered_map<int,int> mpp;
    int i=0;
    mpp[nums[i]] = i;
    for(i=1;i<nums.size();i++){
        for(auto it : mpp){
            if(abs(it.second-i) <= indexDiff && abs(it.first-nums[i]) <= valueDiff){
                return true;
            }
        }
        mpp[nums[i]] = i;
    }
    return false;
}
int main()
{
    // vector<int> nums = {1,2,3,1};
    // int indexDiff = 3, valueDiff = 0;
    // vector<int> nums = {1,5,9,1,5,9};
    // int indexDiff = 2, valueDiff = 3;
    // vector<int> nums =
    // int indexDiff = 1, valueDiff = 0;
    if(containsDuplicates(nums,indexDiff,valueDiff)) cout<<"True";
    else cout<<"False";
    return 0;
}
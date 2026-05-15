#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool containDuplicates(vector<int> nums, int k){
    unordered_map<int,int> mpp;
    for(int i=0;i<nums.size();i++){
        if(mpp.find(nums[i]) == mpp.end()) mpp[nums[i]] = i;
        else{
            if(abs(mpp[nums[i]]-i) <= k) return true;
            mpp[nums[i]] = i;   
        }
    }
    return false;
}
int main()
{
    // vector<int> nums = {1,2,3,1,2,3};
    // int k = 2;
    vector<int> nums = {1,0,1,1};
    int k = 1;
    if(containDuplicates(nums,k)) cout<<"True";
    else cout<<"False";
    
    return 0;
}
#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    vector<int> nums = {2,12,10,4,6,8,10};
    multimap<int,int> mpp;
    for(int i=0;i<nums.size();i++){
        mpp.insert({nums[i],i});
    }
    int target=14;
    int count=0,rem;
    for(int i=0;i<nums.size();i++){
        rem =target-nums[i];
        if(mpp.find(rem)!=mpp.end() && mpp.rem)==i-1){
            count++;
        }
    }
    
    return 0;
}
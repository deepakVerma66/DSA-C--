#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    // vector<int> nums = {1,2,3,-3,1,1,1,4,2,-3};
    vector<int> nums = {1,1,1};
    int k = 2 ;
    unordered_map<int,int> preSum;
    preSum[0] = 1;
    int sum = 0,count = 0;
    for(int i = 0;i<nums.size();i++){
        sum+=nums[i];
        int rem = sum-k;
        if(preSum.find(rem)!=preSum.end()){
            count+=preSum[rem];
        }
        preSum[sum]++;
    }
    cout<<count;
    
    return 0;
}
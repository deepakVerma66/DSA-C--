#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> nums = {1}; not solved yet for k=0;
    // vector<int> nums = {1,2,3};
    vector<int> nums = {-1,-1,1};
    int count=0,sum=0,k=0,start=0,i=0;
    while(i<nums.size()){
        sum+=nums[i++];
        while(sum>k){
            sum-=nums[start++];
        }
        if(sum==k){
            count++;
        }
    }
    cout<<count;
    return 0;
}
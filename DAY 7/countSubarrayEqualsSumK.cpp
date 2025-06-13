#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    // vector<int> nums = {1,1,1};
    // int k=2;
    unordered_map<int,int> mpp;
    // vector<int> nums = {1,2,3};
    // int k=3;
    vector<int> nums = {-1,-1,1};
    int k=0;
    int sum=0,count=0,start=0,rem;

    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum==k){
            count++;
        }
        else if(sum<k){
            rem = k-sum;
            if(mpp.find(rem)!=mpp.end()){
                count++;
            }
            else{
                mpp[sum]++;
            }
        }
        while(sum>=k){
            sum-=nums[start++];
        }
    }
    
    cout<<count;
    
    return 0;
}
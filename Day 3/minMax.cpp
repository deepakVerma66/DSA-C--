#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    // vector<int> nums = {10,100,300,200,1000,20,30};
    // int k=3;
    // vector<int> nums = {1,2,3,4,10,20,30,40,100,200};
    // int k=4;
    vector<int> nums = {1,2,1,2,1,2};
    int k=2;
    int unfairness = INT_MAX;
    sort(nums.begin(),nums.end());
    for(int i=0;i<=nums.size()-k;i++){
        int tempunfairness = nums[i+k-1]-nums[i];
        unfairness = min(unfairness,tempunfairness);
    }
    cout<<unfairness;
    return 0;
}
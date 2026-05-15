#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums = {3,5,8,15,19,19,19};
    int n = 20;
    // vector<int> nums = {1,2,2,3};
    // int n = 2;
    int start = 0, end = nums.size()-1,index = -1;
    while(start<=end){
        int mid = start + ((end-start)/2);
        if(nums[mid] == n){
            index = mid;
        }
        else if(nums[mid]<n) start = mid + 1;
        else{
            index = mid;
            end = mid - 1;
        }
    }
    cout<<index;
    return 0;
}
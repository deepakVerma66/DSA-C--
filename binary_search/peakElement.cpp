#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> nums = {1,2,3,4,5,6,7,5,4,3};
    // vector<int> nums = {5,4,3};
    // vector<int> nums = {1,2,3,4,5,6,7};
    vector<int> nums = {1,2,3,2,5,4};
    if(nums.size() == 1 || nums[0]>nums[1]){
        cout<<0;
        return 0;
    }
    if(nums[nums.size()-1]>nums[nums.size()-2]){
        cout<<nums.size() - 1;
        return 0;
    }
    int start = 1, end = nums.size() - 2;
    while(start <= end){
        int mid = start + ((end - start)/2);
        if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]){
            cout<< mid;
            return 0;
        }
        else if(nums[mid] > nums[mid - 1]) start = mid + 1;
        else if(nums[mid] > nums[mid + 1]) end = mid - 1;
        else start = mid + 1;
    }
    
    return 0;
}
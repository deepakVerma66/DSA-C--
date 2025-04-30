#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums = {1,3,4,5};
    int target = 7;
    int mid,start=0,end=nums.size()-1;
    while(start<=end){
        mid = (start+end)/2;
        if(nums[mid]<target){
            if(nums[mid+1]>target){
                cout<<mid+1;
                return 0;
            }
            start = mid+1;
        }
        else if(nums[mid]>target){
            if(nums[mid-1]<target){
                cout<<mid;
                return 0;
            }
            end = mid-1;
        }
        else{
            cout<<mid;
            return 0;
        }
    }
    return 0;
}
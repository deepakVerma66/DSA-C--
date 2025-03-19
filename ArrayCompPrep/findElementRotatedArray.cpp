#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums={4,5,6,7,0,1,2};
    int target = 7, targetIndex=-1;
    int start=0,end=nums.size()-1,mid;
    while(start<=end){
        mid = start+(end-start)/2;
        if(nums[mid]==target){
            targetIndex=mid;
        }
        elseif(nums[mid]>target){
            
        }
    }
    return 0;
}
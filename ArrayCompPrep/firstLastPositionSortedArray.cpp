#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums={1};
    int target = 1;
    int start = 0,end = nums.size()-1;
    int x=-1,y=-1,mid;
    while(start<=end){
        mid = (start+end)/2;
        if(nums[mid]<target){
            start = mid+1;
        }
        else if(nums[mid]>target){
            end = mid-1;
        }
        else{
            x=mid;
            y=mid;
            while(nums[mid-1]==target){
                x=mid-1;
                mid--;
            }
            while(nums[mid+1]==target){
                y=mid+1;
                mid++;
            }
            break;
        }
    }
    cout<<x<<" "<<y;
    return 0;
}
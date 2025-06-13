#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Approch 1.) We can generate all possible permutations and that will cost us O(N!*N) N! for vasious combinations and N for N Elements

// Approach 2.) We will follow some steps for the generation of the just next permutation
int main()
{
    // vector<int> nums = {2,3,5,4,1,0,0};
    vector<int> nums = {1,2,3};
    // i.) Check for the break point i.e. point where the positive slope of the elements starting from the ending breaks
    int n = nums.size(),index=-1;
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            index=i;
            break;
        }
    }
    // cout<<index;
    if(index==-1){
        reverse(nums.begin(),nums.end());
    }
    else{

            // ii.) Check for the next largest element
            for(int i=n-1;i>index;i--){
                if(nums[i]>nums[index]){
                    swap(nums[i],nums[index]);
                    break;
                }
            }
        
            // iii.)Now just reverse the part of the array next to the break point and you will get the next permutation
            reverse(nums.begin()+index+1,nums.end());
            
    }

    for(int i:nums){
        cout<<i<<" ";
    }
    return 0;
}
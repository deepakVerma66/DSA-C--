#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    int target = 11;
    int length=0,minlength=INT16_MAX,sum=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i;j<nums.size();j++){
        //         sum+=nums[j];
        //         // if(sum>target){
        //         //     sum=0;
        //         //     break;
        //         // }
        //         if(sum>=target){
        //             length = j-i+1;
        //             cout<<i<<" "<<j<<endl;
        //             minlength=length;
        //             minlength = min(length,minlength);
        //             sum=0;
        //             break;
        //         }
        //     }
        //     sum=0;
        // }
        int left=0;

        for(int right = 0;right<nums.size();right++){
            sum+=nums[right];
            while(sum>=target){
                minlength = min(right-left+1,minlength);
                sum-=nums[left++];
            }
        }
        if(minlength==INT16_MAX){
            cout<<0;
        }
        else{
            cout<<minlength;
        }
    return 0;
}
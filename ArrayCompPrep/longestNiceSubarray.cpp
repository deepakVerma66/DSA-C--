#include<iostream>
#include<vector>
using namespace std;

int longestNicestSubarray(vector<int>&nums){
    bool odd = true;
    int largestSubArray=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0){
            odd = false;
            cout<<"If block";
            break;
        }
        else{odd = true;}
    }
    if(odd){
        return 1;
    }
    else{
        int start=0,i=1,j=0,length=0;
        while(i<nums.size() && j<nums.size()){
            // cout<<"HI"<<endl;
            if((nums[j] & nums[i])!=0){
                i++;
                cout<<"Hello"<<endl;
                start++;
                j++;
                length=0;
            }
            else{
                j=start;
                // cout<<"Hehe"<<endl;
                while((nums[j] & nums[i])==0 && j<i){
                    cout<<"Bye"<<endl;
                    length++;
                    j++;
                    largestSubArray = max(largestSubArray,length);
                }
            }
        }
    }
    return largestSubArray;
}

int main()
{
    // vector<int> nums = {3,1,5,11,13};
    vector<int> nums = {1,3,8,48,10};
    // cout<<(3 & 1);
    int length = longestNicestSubarray(nums);
    cout<<"Largest Length of subarray as returned to main: "<<length;
    // cout<<"Bit wise and: "<<(3&8);
    return 0;
}
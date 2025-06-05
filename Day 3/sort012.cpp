#include<iostream>
#include<vector>
using namespace std;

// Approach 1.) Maintining the count of the frequency of 0 1 and 2 and then overriting the vector with the count of 0's 1's and 2's

// int main()
// {
//     vector<int> nums = {0,1,2,0,1,2,1,2,0,0,0,1};
//     int count0=0,count1=0,count2=0;
//     for(int i=0;i<nums.size();i++){
//         if(nums[i]==0){
//             count0++;
//         }
//         else if(nums[i]==1){
//             count1++;
//         }
//         else{
//             count2++;
//         }
//     }
//     vector<int>().swap(nums);
//     while(count0>0){
//         nums.push_back(0);
//         count0--;
//     }
//     while(count1>1){
//         nums.push_back(1);
//         count1--;
//     }
//     while(count2>0){
//         nums.push_back(2);
//         count2--;
//     }
//     for(int i:nums){
//         cout<<i<<" ";
//     }
    
//     return 0;
// }

// The code below is the code that i tried but unable to do so

// int main(){
//     vector<int>nums = {0,1,2,0,1,2,1,2,0,0,0,1,2};
//     int i=0,j=nums.size()-1,it=0;
//     bool flag0=false;
//     while(i<j){
//         if(nums[it++]==0 && flag0==false){
//             flag0=true;
//             while(nums[i]==0){
//                 i++;
//             }
//         }
//         else if(nums[it]==0 && flag0==true){
//             while(nums[i]==0){
//                 i++;
//             }
//             swap(nums[i++],nums[it]);
//         }
//         else if(nums[it]==2){
//             while(nums[j]==2){
//                 j--;
//             }
//             swap(nums[j--],nums[it]);
//         }
//         else if(nums[it]==1){
//             it++;
//         }
//     }
//     for(int k:nums){
//         cout<<k<<" ";
//     }
// }



// Dutch national Flag

int main(){
    vector <int> nums = {0,1,2,0,1,2,1,2,2,2,2,2,1,2,0,0,0,0,1,2};
    int low=0, mid=0,high = nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low++],nums[mid++]);
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high--]);
        }
    }
    for(int i:nums){
        cout<<i<<" ";
    }
}
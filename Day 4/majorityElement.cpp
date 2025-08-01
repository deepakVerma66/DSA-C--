#include<iostream>
#include<vector>
using namespace std;

// Approach 1.) Using linear search 

// int main()
// {
//     vector<int> nums = {2,2,3,3,3,3,3,3,3,3,1,2,2};
//     int count;
//     for(int i=0;i<nums.size();i++){
//         count=0;
//         for(int j=0;j<nums.size();j++){
//             if(nums[j]==nums[i]){
//                 count++;
//                 if(count>(nums.size()/2)){
//                     cout<<nums[i];
//                     return 0;
//                 }
//             }
//         }
//     }
//     return 0;
// }


// Approach 2.) Using Hashmaps
// #include<unordered_map>
// int main(){
//     vector <int> nums = {3,3,1,4,3,2,1,3,3};
//     unordered_map <int,int> mpp;
//     for(int i=0;i<nums.size();i++){
//         mpp[nums[i]]++;
//     }
//     for(auto i:mpp){
//         if(i.second>nums.size()/2){
//             cout<<i.first;
//             return 0;
//         }
//     }
// }


// Approach 3.) sorting the array and then maintaining the count for the continuous series of same repetition and update the count if the series changes and in between check the value of count if >n/2 retunr the current element
// #include<algorithm>
// int main(){
//     // vector<int> nums = {3, 4, 5, 5, 5, 5};
//     // vector<int> nums = {1, 1, 2, 2};
//     vector<int> nums = {2, 2, 2, 2};
//     sort(nums.begin(),nums.end());
//     int currEle = nums[0];
//     int count = 1;
//     for(int i=1;i<nums.size();i++){
//         if(nums[i]==currEle){
//             count++;
//             if(count>nums.size()/2){
//                 cout<<currEle;
//                 return 0;
//             }
//         }
//         else{
//             count=1;
//             currEle = nums[i];
//         }
//     }
// }

// Moore voting algo 
int main(){
    vector<int> nums = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int count=1,currEle = nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i]==currEle){
            count++;
        }
        else{
            count--;
            if(count==0){
                currEle = nums[++i];
                count = 1;
            }
        }
    }
    // cout<<currEle;
    int counter=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==currEle){
            counter++;
            if(counter>nums.size() / 2){
                cout<<currEle;
                return 0;
            }
        }
    }
    return -1;
}
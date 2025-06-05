#include<iostream>
#include<vector>
using namespace std;

// Approach 1.) Using every possible combination i.e two for loops

// int main()
// {
//     vector<int> nums = {2,6,5,8,11};
//     bool flag = false;
//     // int sum = 0;
//     int target = 1;
//     for(int i=0;i<nums.size();i++){
//         for(int j=i+1;j<nums.size();j++){
//             if(nums[i]+nums[j]==target){
//                 flag=true;
//                 break;
//             }
//         }
//     }
//     if(flag){
//         cout<<"Target Sum Available";
//     }
//     else{
//         cout<<"Target Sum not Available";
//     }
    
//     return 0;
// }

// Approach 2.) Using Hashmaps Select an element and search for the remainder if available or not in the hashmap

#include<unordered_map>
// int main(){
//     vector <int> nums = {2,5,9,8,11};
//     int target = 20;
//     bool flag = false;
//     unordered_map <int,int> mpp;
//     for(int i=0;i<nums.size();i++){
//         mpp[nums[i]]++;
//     }
//     for(int i=0;i<nums.size();i++){
//         int rem = target-nums[i];
//         if(mpp.find(rem)!=mpp.end()){
//             flag=true;
//         }
//     }
//     if(flag){
//         cout<<"Yes";
//     }
//     else{cout<<"No";}
//     return 0;
// }


// int main(){
//     vector<int> nums = {2,4,5,7,8,9,11,20};
//     vector<int> indices;
//     int target = 25;
//     unordered_map<int,int> mpp;
//     for(int i=0;i<nums.size();i++){
//         int rem = target-nums[i];
//         if(mpp.find(rem)!=mpp.end()){
//             indices.push_back(mpp[rem]);
//             indices.push_back(i);
//         }
//         mpp[nums[i]]=i;
//     }
//     for(auto i:indices){
//         cout<<i<<" ";
//     }
// }

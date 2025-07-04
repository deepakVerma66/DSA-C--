#include<iostream>
#include<vector>

// We define a harmonious array as an array where the difference between its maximum value and its minimum value is exactly 1.
// Given an integer array nums, return the length of its longest harmonious subsequence among all its possible subsequences.
// Example 1:
// Input: nums = [1,3,2,2,5,2,3,7]
// Output: 5

// using namespace std;
// int main()
// {
//     vector<int> nums = {1,2,2,3,3,3,5,7};
//     int start = 0,newSubSeq = 0,count = 1,maxCount = 0;
//     bool flag = false;
//     for(int i=1;i<nums.size();i++){
//         if(nums[i]==nums[start] || nums[i]==nums[newSubSeq]){
//             count++;
//         }
//         else if(nums[i]==nums[start]+1){
//             count++;
//             newSubSeq = i;
//             flag=true;
//             maxCount = max(count,maxCount);
//         }
//         else{
//             if(nums[i]==(nums[newSubSeq] + 1)){
//                 maxCount = max(count,maxCount);
//                 count-=newSubSeq-start+1;
//                 start = newSubSeq;
//                 newSubSeq = i;
//                 flag=true;
//             }
//             else{
//                 start = i;
//                 newSubSeq = i;
//                 count = 1;
//                 flag=false;
//             }
//         } 
//                 maxCount = max(count,maxCount);

        
//         cout<<i<<" : "<<"count = "<<count<<"\t Max Count = "<<maxCount<<"\tStart : "<<nums[start]<<"\tNew Sub Seq : "<<nums[newSubSeq]<<endl;
//     }
//     cout<<maxCount;
    
//     return 0;
// }
// The Appraoach i used here had little bit issues so i moved on to using maps

// The correct version of what i did

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    // vector<int> nums = {1,3,2,2,5,2,3,7};
    vector<int> nums = {1,3,2,2,5,2,3,7};
    sort(nums.begin(), nums.end());

    int start = 0;
    int maxCount = 0;

    for (int i = 0; i < nums.size(); i++) {
        while (nums[i] - nums[start] > 1) {
            start++;
        }
        if (nums[i] - nums[start] == 1) {
            maxCount = max(maxCount, i - start + 1);
        }
    }
    cout << maxCount;
    return 0;
}



// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// int main()
// {
//     vector<int> nums = {1,3,5,7,9,11,13,15,17};
//     unordered_map<int,int> freq;
//     int maxLen=0;
//     for(int i:nums){
//         freq[i]++;
//     }
//     for(auto it:freq){
//         if(freq[(it.first+1)]){
//             maxLen = max(maxLen,(freq[it.first]+freq[it.first+1]));
//         }
//     }
//     cout<<maxLen;
//     return 0;
// }






// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<climits>
// using namespace std;
// // Approach 1.) We can use the brute method using every possible method/way to get the longest consecutive subsequence using two for loops and for a particular element check for its next consecutive occurence after every iteration and 
// int main()
// {
//     // vector<int> nums = {1,1,1,2,3,3,100,100,101,101,102,103,104,105};
//     // vector<int> nums = {1, 1, 1, 1, 2, 3, 10, 11, 12};
//     // vector<int> nums = {10, 30, 20, 40};
//     // vector<int> nums = {1, 2, 2, 3, 4, 5, 7};
//     vector<int> nums = {5, 100, 4, 200, 3, 2, 1};

//     sort(nums.begin(),nums.end());
//     int cnt = 1,longestSeq=0,currentEle = nums[0],i=1;
//     while(i<nums.size()){
//         if(nums[i]==currentEle){
//             i++;
//         }
//         else{
//             if(nums[i]==currentEle+1){
//                 currentEle = nums[i];
//                 i++;
//                 cnt++;
                
//             }
//             else{
//                 currentEle = nums[i];
//                 i++;
//                 cnt = 1;
//             }
//         }
//         longestSeq = max(cnt,longestSeq);
//     }
//     cout<<longestSeq;
    
//     return 0;
// }


#include<iostream>
#include<vector>
#include<unordered_set>
#include<climits>
using namespace std;
int main()
{
    vector<int> nums = {1,1,1,2,3,3,4,5,6,7,8,100,100,101,101,102,103,104,105,106,107,108};
    unordered_set<int> uset;
    int longestSeq=1,start = INT_MIN;
    for(int i:nums){
        uset.insert(i);
    }
    for(auto i:uset){
        if(uset.find(i-1)==uset.end()){
            int cnt = 1;
            int start = i;
            while(uset.find(start+1)!=uset.end()){
                cnt++;
                start++;
            }
            longestSeq = max(longestSeq,cnt);
        }
    }
    cout<<longestSeq;
    
    
    return 0;
}
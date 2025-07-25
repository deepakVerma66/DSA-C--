#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> nums = {5,4,3,2,1};
    vector<int> nums = {10,3,8,9,4};
    int n = nums.size();
    // vector<string>ans(n,"0"); 
    // for(int i=0;i<n;i++){
    //     int m = *max_element(nums.begin(),nums.end());        
    //     auto ptr = find(nums.begin(),nums.end(),m);
    //     int index = ptr-nums.begin();
    //     if(i==0){
    //         ans[index] = "Gold Medal";
    //     }
    //     else if(i==1){
    //         ans[index] = "Silver Medal";
    //     }
    //     else if(i==2){
    //         ans[index] = "Bronze Medal";
    //     }
    //     else{
    //         ans[index] = to_string(i+1);
    //     }
    //     nums[index] = -1;
    // }


    vector<pair<int,int>> indexedValues;
        for(int i=0;i<n;i++){
            indexedValues.push_back({nums[i],i});
        }
        sort(indexedValues.rbegin(),indexedValues.rend());
        vector<string>ans(n);
        for(int i=0;i<n;i++){
            if(i==0){
                ans[indexedValues[i].second] = "Gold Medal";
            }
            else if(i==1){
                ans[indexedValues[i].second] = "Silver Medal";
            }
            else if(i==2){
                ans[indexedValues[i].second] = "Bronze Medal";
            }
            else{
                ans[indexedValues[i].second] = to_string(i+1);
            }
        }

    for(string i:ans){
        cout<<i<<" ";
    }
    
    return 0;
}
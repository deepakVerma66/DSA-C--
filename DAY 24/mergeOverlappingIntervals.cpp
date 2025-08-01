#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<pair<int,int>> nums = {{1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};
    vector<pair<int,int>> pairList;
    sort(nums.begin(),nums.end());
    // pairList.push_back((pair)(nums[0][0],nums[0][1])); Wrong method
    pairList.push_back(nums[0]);
    int j=0;
    for(int i=1;i<nums.size();i++){
        if(pairList[j].second>=nums[i].first){
            if(nums[i].second>pairList[j].second){
                pairList[j].second = nums[i].second;
            }
            else{
                continue;
            }
        }
        else{
            pairList.push_back(nums[i]);
            j++;
        }
    }
    vector<vector<int>> ans;
    for(auto i:pairList){
            // cout<<i.first<<" "<<i.second<<" "<<endl;
            ans.push_back({i.first,i.second});
    }
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
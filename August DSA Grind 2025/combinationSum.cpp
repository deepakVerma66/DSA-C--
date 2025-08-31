#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    vector<int> nums = {2,3,6,7};
    vector<vector<int>> ans;
    vector<int> target_list;
    int target = 8;

    unordered_map<int,int> mpp;
    for(int i:nums){
        mpp[i]++;
    }

    for(int i=0;i<nums.size();i++){
        int sum = 0, rep = 1;
        while(sum<=target){
            sum = (nums[i] * rep) - sum;
            int rem = target - sum;
            if(mpp.find(rem) != mpp.end()){
                target_list.insert(target_list.end(), rep, nums[i]);
                target_list.insert(target_list.end(),1,rem);
                break;
            }
            rep++;
        }
        if(sum == target){
            ans.push_back(target_list);
            target_list.clear();
        }
    }
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
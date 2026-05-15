#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<vector<int>> combinationSum(vector<int> nums, int target){
    unordered_map<int, int> mpp;
    for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
    }
    vector<vector<int>> vecList;
    for(int i=0;i<nums.size();i++){
        // cout<<"Hello"<<endl;
        int j = 1;
        int sum = nums[i];
        vector<int>vec;
        if(sum == target){
            vecList.push_back({nums[i]});
        }
        else if(target % nums[i] == 0){
            vec.insert(vec.end(), nums[i], target/nums[i]);
        }
        else{
            while(sum <= target ){
                // cout<<"Hi"<<" ";
                int rem = target-sum;
                if(mpp.find(rem) != mpp.end()){
                    vec.insert(vec.end(),nums[i],j);
                    vec.push_back(rem);
                    
                    sum = target;
                }
               
                else{
                    j++;
                    sum += nums[i];
                    // break;
                    if(sum == target){
                        vec.insert(vec.end(),nums[i],j);
                    }
                }
            }
            vecList.push_back(vec);
        }
    }
    return vecList;
}

int main()
{
    vector<int> nums = {2,3,5};
    vector<vector<int>> vec = combinationSum(nums, 8);
    for(auto i:vec){
        for(auto j: i){
            cout<<j<<" ";
        }
        cout<<endl;
        // cout<<"hello";
    }
    return 0;
}
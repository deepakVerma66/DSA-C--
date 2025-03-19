#include<iostream>
#include<vector>
#include<map>
using namespace std;
bool divideArray(vector<int> &nums){
    map<int,int>mp;
    for(int i:nums){
        mp[i]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<":"<<it->second<<endl;
    }
    for(auto it:mp){
        if(it.second%2!=0){
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> nums = {1,2,3,4};
    bool yes =  divideArray(nums);
    if(yes){
        cout<<"Array can be divided";
    }else{
        cout<<"Array can't be divided";
    }
    return 0;
}
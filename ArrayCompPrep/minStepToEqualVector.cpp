#include<iostream>
#include<vector>
#include <typeinfo>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1,2,3};
    // cout<<typeid(maxim).name();
    // cout<<*maxim<<endl;
    vector<int> nums2 = nums;
    auto maxim = max_element(nums2.begin(),nums2.end());
    // // nums2.erase(maxim);
    // nums2.erase(maxim);
    // // nums2+=1;

    // for(int &i:nums2){
    //     i++;
    // }
    // nums2.push_back(*maxim);
    
    // for(auto i:nums2){
    //     cout<<i<<" ";
    // }
    bool equals = all_of(nums2.begin(),nums2.end(),[maxim](int i){return i==(*maxim);});
    if(equals){
        cout<<"All equal";
    }
    else{
        cout<<"Plzz check";
    }

    return 0;
}
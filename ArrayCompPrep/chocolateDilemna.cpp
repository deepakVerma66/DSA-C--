#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{

    vector<int> nums = {7,3,2,4,9,12,56};
    // 2,3,4,7,9,12,56
    int m=3;
    sort(nums.begin(),nums.end());
    int min_diff = INT32_MAX;
    for(int i=0;i<=nums.size()-m;i++){
        min_diff = min(min_diff,(nums[i+m-1]-nums[i]));
    }
    cout<<min_diff;
    return 0;










    // This code is to validate the input i.e it should not be -ve or 0


    // cout<<"Enter the size"<<endl;
    // int n;
    // cin>>n;
    // vector<int>nums(n);
    // cout<<"Enter the elements"<<endl;
    // for(int i=0;i<nums.size();i++){
    //     cin>>nums[i];
    //     if(nums[i]<=0){
    //         cout<<"Invalid Number"<<endl;
    //         cout<<"Enter "<<i<<"th element"<<endl;
    //         i--;
    //     }
    // }
    // cout<<"The entered elements are"<<endl;
    // for(int j=0;j<nums.size();j++){
    //     cout<<nums[j]<<" ";
    // }


    
}
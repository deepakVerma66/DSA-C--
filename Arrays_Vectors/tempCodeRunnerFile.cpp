#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> nums = {1,2,2,4,4,6,8,8,10};
    int n = nums.size();
    int j=0;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(nums[i]==nums[i+1]){
            flag=true;
            if(flag==false){
                j=i+1;
            }
        }
        else{
            if(flag==true){
                nums[j++] = nums[i+1];
            }
        }
    }
    for(int i=0;i<j-1;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}
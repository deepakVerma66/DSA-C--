#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <vector<int>> nums = {{1,2},{2,4},{4,6}};
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[i].size();j++){
            nums[i][j]=nums[j]+2;
        }
    }
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[i].size();j++){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
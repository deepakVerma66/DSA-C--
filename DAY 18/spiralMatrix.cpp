#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<vector<int>> nums = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30},{31,32,33,34,35,36}};
    vector<vector<int>> nums = {{1,2,3},{5,6,7},{8,9,10}};
    int n = nums.size();
    int m = nums[0].size();
    int top = 0,bottom = n-1;
    int left = 0,right = m-1;
    while(top<=bottom && left <= right){
        for(int i=left;i<=right;i++){
            cout<<nums[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<nums[i][right]<<" ";
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<nums[bottom][i]<<" ";
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<nums[i][left]<<" ";
            }
            left++;
        }
    }
    
    return 0;
}
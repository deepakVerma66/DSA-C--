#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> nums = {5,4,3,2,1};
    vector<int> nums = {0,2,3,4,5,0}; //Both Edge Cases
    // vector<int> nums = {1,2,100,2,1};
    int maxArea = 0,length,breadth;
    int end = nums.size()-1;
    int i=0;
    while(i<end){
        length = min(nums[i],nums[end]);
        breadth = end-i;
        maxArea = max(maxArea,(length*breadth));
        if(nums[i]<=nums[end]){
            i++;
        }
        else{
            end--;
        }
        cout<<length<<"*"<<breadth<<"="<<maxArea<<endl;
    }
    cout<<"Final Area "<<maxArea;
    return 0;
}
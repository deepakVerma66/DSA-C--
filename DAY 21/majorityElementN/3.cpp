#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> nums = {1,2,2};
    int i = 0, count = 0,currEle = nums[0], n = nums.size();
    vector<int> newList;
    sort(nums.begin(),nums.end());
    while(i<n){
        while(nums[i]==currEle){
            ++i;
            count++;
        }
        if(count>n/3){
            newList.push_back(currEle);
        }
        count = 0;
        currEle = nums[i];
    }
    for(int i:newList){
        cout<<i<<" ";
    }
    
    return 0;
}
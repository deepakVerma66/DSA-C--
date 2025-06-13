#include<iostream>
#include<vector>
using namespace std;

// Approach 1.) Using 2 loops to check if all the elements right to the element is lesser then that or not

// Approach 2.) Startin from the last, the last element is always the leader, and then moving ahead and see either the element is greater then the leader or not if yes make that the leader and push the previous element in some array for the leaders

int main()
{
    vector<int> nums = {10,22,12,0,3,6};
    int n = nums.size();
    vector<int> leaderList;
    int leader = nums[n-1];
    leaderList.push_back(nums[n-1]);
    for(int i=n-2;i>=0;i--){
        if(nums[i]>leader){
            leader = nums[i];
            leaderList.insert(leaderList.begin(),leader);
        }
    }
    for(int i:leaderList){
        cout<<i<<" ";
    }
    
    return 0;
}
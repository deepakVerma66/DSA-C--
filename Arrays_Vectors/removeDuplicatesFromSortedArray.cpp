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
        if(nums[j]!=nums[i]){
            nums[++j] = nums[i];
        }
    }
    for(int i=0;i<=j;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}

// #include<iostream>
// #include<vector>
// #include<set>
// using namespace std;
// int main()
// {
//     vector <int> nums = {1,2,2,4,4,6,8,8,10};
//     set <int> s;
//     for(int x:nums){
//         s.insert(x);
//     }
//     for(int x:s){
//         cout<<x<<" ";
//     }
//     return 0;
// }
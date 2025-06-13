#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> nums = {4,3,2,1};
    int digit=0;
    for(int i:nums){
        digit = digit*10+i;     //O(N)
    }
    // cout<<digit;
    digit++;
    nums.clear();
    int n=0;
    while(digit>0){
        n=digit%10;
        digit = digit/10;     //O(size(nums))
        // cout<<n<<endl;
        nums.push_back(n);
    }
    reverse(nums.begin(),nums.end());   //O(log n)
    for(int i:nums){
        cout<<i<<" ";
    }
    return 0;
}
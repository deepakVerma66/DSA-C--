#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // vector<int> nums = {2,1,5,4};
    vector<int> nums = {21,12,11};
    int count = 0;
    for(int i=0;i<nums.size()-1;i++){
        int firstDigit,n=nums[i];
        while(n>0){
            firstDigit = n % 10;
            n/=10;
        }
        for(int j=i+1;j<nums.size();j++){
            if(__gcd(firstDigit,nums[j]%10)==1) count++;
        }
    }
    cout<<count;
    
    return 0;
}
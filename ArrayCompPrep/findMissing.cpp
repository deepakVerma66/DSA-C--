#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,4,5,7,8,6};

    int maxEle = *max_element(nums.begin(), nums.end());



    int sum = (maxEle * (maxEle + 1)) / 2;

    int arrSum = accumulate(nums.begin(),nums.end(),0);
    cout<<sum-arrSum;

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3};
    int n = nums.size();
    int iter = 0;
    vector<vector<int>> permutationsVec;
    int fact = 1,l=n;
    while(l>0){
        fact*=l;
        l--;
    }
    while (iter != fact)
    {
        int index = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                index = i;
                break;
            }
        }
        if (index == -1)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            for (int i = n - 1; i > index; i--)
            {
                if (nums[i] > nums[index])
                {
                    swap(nums[i], nums[index]);
                    break;
                }
            }
            reverse(nums.begin() + index + 1, nums.end());
        }
        // cout<<"Inside Logic "<<endl;
        // for(int i:nums){
        //     cout<<i<<" ";
        // }
        cout<<endl;
        permutationsVec.push_back(nums);
        iter++;
    }
    for(int i=0;i<permutationsVec.size();i++){
        for(int j=0;j<permutationsVec[i].size();j++){
            cout<<permutationsVec[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
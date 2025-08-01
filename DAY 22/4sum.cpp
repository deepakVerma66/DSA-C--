#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    // vector<int> nums = {2,2,2,2,2};
    // vector<int> nums = {-5,-4,-3,-2,-1,0,1,2,3,4,5};
    int target = 0;
    // set<vector<int>> hashSet;
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        // if(i>0 && nums[i]==nums[i-1]) continue;
        for (int j = i + 1; j < nums.size(); j++)
        {
            // if(j>i+1 && nums[j]==nums[j-1]) continue;
            int k = j + 1, l = nums.size() - 1;
            while (k < l)
            {
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];
                if (sum == target)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    // sort(temp.begin(),temp.end());
                    // hashSet.insert(temp);
                    ans.push_back(temp);
                    k++;
                    l--;
                    while (k < l && nums[k] == nums[k - 1])
                        k++;
                    while (k < l && nums[l] == nums[l + 1])
                        l--;
                }
                else if (sum < 0)
                {
                    k++;
                }
                else
                {
                    l--;
                }
            }
        }
    }

    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
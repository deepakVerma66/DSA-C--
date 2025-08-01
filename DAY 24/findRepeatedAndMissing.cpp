#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 8};
    sort(nums.begin(), nums.end());
    int currElement = -1;
    int missingElement = -1;
    int repeatedElement = -1;
    int xr = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != currElement)
        {
            currElement = nums[i];
        }
        else
        {
            repeatedElement = currElement;
        }
        xr ^= i + 1;
        xr ^= nums[i];
    }
    xr ^= repeatedElement;

    cout << "Repeated Element : " << currElement << endl;
    cout << "Missing Element : " << xr;
    return 0;
}
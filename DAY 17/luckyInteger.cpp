#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // vector<int> nums = {1,2,2,2,3,3,4,4,4}; 
    vector<int> nums = {1,2,3,4}; 
    sort(nums.begin(), nums.end());

    int i = nums.size() - 1;
    while (i >= 0) {
        int current = nums[i];
        int count = 0;
        
        // Count occurrences of nums[i]
        while (i >= 0 && nums[i] == current) {
            count++;
            i--;
        }

        // Check if it's a lucky number
        if (count == current) {
            cout << count;
            return 0;
        }
    }

    cout << -1;
    return 0;
}

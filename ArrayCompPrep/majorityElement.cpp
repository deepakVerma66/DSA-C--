// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     vector <int> nums = {2,2,1,1,1,2,2};
//     int maxSize = nums.max_size();
//     vector<int> maxEle(maxSize,0);
//     for(int i=0;i<nums.size();i++){
//         maxEle[nums[i]] +=1;
//     }
//     auto maxIt = max_element(maxEle.begin(), maxEle.end());

//     // Compute index
//     int maxIndex = distance(maxEle.begin(), maxIt);
//     cout<<maxIndex;
//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

//     // Find the maximum element in nums to define the size of maxEle
//     int maxNum = *max_element(nums.begin(), nums.end());

//     vector<int> maxEle(maxNum + 1, 0); // Allocate only needed size

//     for (int i = 0; i < nums.size(); i++) {
//         maxEle[nums[i]] += 1;
//     }

//     auto maxIt = max_element(maxEle.begin(), maxEle.end());

//     // Compute index
//     int maxIndex = distance(maxEle.begin(), maxIt);
//     cout << maxIndex;

//     return 0;
// }


// This code give error as memory limit exceeded
// So we will try this with hashmaps when we will 
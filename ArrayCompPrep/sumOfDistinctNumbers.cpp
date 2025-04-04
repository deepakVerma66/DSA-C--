// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     vector<int> nums = {1, 1, 2, 2, 3,4, 3, 4, 4, 4, 4, 5};
//     vector<int> sumArray; // To store unique elements

//     int i = 0;
//     while (i < nums.size()) {
//         // cout << "I While Loop\n";
//         bool exists = false;
//         int j = 0;

//         while (j < sumArray.size()) {
//             // cout << "J While Loop\n";
//             if (nums[i] == sumArray[j]) {
//                 exists = true;
//                 break;  // Exit loop early if found
//             }
//             j++;
//         }

//         // If not found, insert into sumArray
//         if (!exists) {
//             sumArray.push_back(nums[i]);
//         }

//         i++;  // Move to next element in nums
//     }

//     // Print unique elements
//     cout << "Unique elements: ";
//     for (int num : sumArray) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector <int> nums = {1,2,2,4,3,3,5,6,4,5,6};
//     vector <int> sumArray;

//     int i=0;
//     while(i<nums.size()){
//         int j=0;
//         bool exists = false;
//         while(j<sumArray.size()){
//             if(sumArray[j]==nums[i]){
//                 exists = true;
//                 break;
//             }
//             j++;
//         }
//         if(!exists){
//             sumArray.push_back(nums[i]);
//         }
//         i++;
//     } 
//     int sum = 0;
//     for(int i=0;i<sumArray.size();i++){
//         sum+=sumArray[i];
//     }
//     cout<<sum;
//     return 0;
// }



// #include<iostream>
// #include<set>
// #include<vector>
// using namespace std;
// int main()
// {
//     int sum=0;
//     vector <int> nums = {1,1,1,2,2,3,4,5,5,5,4};
//     set <int> numSet(nums.begin(),nums.end());
//     for(int i:numSet){
//         sum+=i;
//     }
//     cout<<sum;
//     return 0;
// }


#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    vector<int> nums = {7,5,4,1,7,8,5,1,4,5,6,3};
    int sum = 0;
    map<int,int> numMap;
    for(int i=0;i<nums.size();i++){
        numMap[nums[i]] += 1;
    }
    for(auto i:numMap){
        sum+=i.first;
    }
    cout<<sum;
    return 0;
}
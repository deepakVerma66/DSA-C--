// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> nums = {0,1,2,3,4,5,6};
//     int min = INT16_MAX, start = 0, end = nums.size()-1;
//     while(start<=end){
//         int mid = start + ((end-start)/2);
//         if(nums[start] <= nums[mid]){
//             min = nums[start];
//             start = mid + 1;
//         }
//         else{
//             min = nums[mid];
//             end = mid - 1;
//         }
//         // if(nums[mid] < min) min = nums[mid];
//     }
//     cout<<min;
//     return 0;
// }



#include<iostream>
#include<vector>
using namespace std;

int main() {
    // vector<int> nums = {0,1,2,3,4,5,6};
    // vector<int> nums = {4,5,6,7,0,1,2,3};
    vector<int> nums = {4,5,1,2,3};

    int start = 0, end = nums.size() - 1;

    while(start < end) {
        // // If already sorted
        // if(nums[start] < nums[end]) {
        //     cout << nums[start];
        //     return 0;
        // }

        int mid = start + (end - start) / 2;

        if(nums[mid] > nums[end]) {
            // Left part sorted → go right
            start = mid + 1;
        } else {
            // Minimum is in left part
            end = mid;
        }
    }

    cout << nums[start]<<endl;
    cout<<"Array has been rotated "<<start<<" times";
    return 0;
}
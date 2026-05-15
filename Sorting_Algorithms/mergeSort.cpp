// #include<iostream>
// #include<vector>
// using namespace std;
// void merge(vector<int> &nums, int left, int mid, int right){
//     vector<int> temp;
//     int low = left;
//     int high = mid + 1;
//     while(low <= mid && high <= right){
//         if(nums[low]<nums[high]) temp.push_back(nums[low++]);
//         else temp.push_back(nums[high++]);
//     }
//     while(low <= mid)temp.push_back(nums[low++]);
//     while(high <= right)temp.push_back(nums[high++]);
//     for(int i = left;i<=right; i++){
//         nums[i] = temp[i-left];
//     }
//     // return 0;
// }
// void mergeSort(vector<int> &nums,int left, int right){
//     if(left == right) return;
//     int mid = (left+right)/2;
//     mergeSort(nums,left, mid);
//     mergeSort(nums, mid+1, right);

//     merge(nums, left, mid, right);
//     // return 0;
// }
// int main()
// {
//     // vector<int> nums = {10,9,8,7,6,5,4,3,2,1};
//     vector<int> nums = {10,10,10,10,1,01,10,1,11,-1};
//     int n = nums.size()-1;
//     mergeSort(nums,0,n);
//     for(int i : nums){
//         cout<<i<<" ";
//     }
    
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&nums, int low, int mid, int high){
    vector<int>temp;
    int left = low; 
    int right = mid+1;
    while(left <= mid && right <= high){
        if(nums[left]<nums[right]){
             temp.push_back(nums[left]);
             left++;
        }
        else {
            temp.push_back(nums[right]);
            right++;
        } 
    }
    while(left<=mid){
        temp.push_back(nums[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(nums[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        nums[i] = temp[i-low]; // INstead of just writing nums[i] = temp[i] we did so since temp is created after eac merge call and is 0-indexed based vector but we want to put the sorted elements in the right position based on the part of vector that called the merge function and there so to get the temp[0] we did temp[i-low] where i = low->high
    }
}
void mergeSort(vector<int> &nums, int low, int high){
    if(low == high) return;
    int mid = (low+high)/2;

    mergeSort(nums, low, mid);
    mergeSort(nums, mid+1, high);

    merge(nums,low,mid,high);
}
int main()
{
    vector<int> nums = {4,5,2,1,4,7,8,2,1,3,4,8,10};
    mergeSort(nums, 0, nums.size()-1);
    // for(int i:nums){
    //     cout<<i<<" ";
    // }
        
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums = {1,2,3};
    int k=0,count=0;
    int start=0,end=3;
    int i=start,prod=1;
    while(i<=end || start<=end){
        
        prod*=nums[i];
        if(prod<k && i<=end){
            count++;
            i++;
            cout<<prod<<endl;
        }
        else{
            // i=start+1;
            start+=1;
            i=start;
            prod=1;
        }
    }
    cout<<"Total Subarrays: "<<count;
    return 0;
}


// #include<iostream>
// #include<vector>
// using namespace std;
// int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//             if (k < 1) return 0;  // No valid subarrays possible
    
//             int count = 0;
//             int start = 0, end = nums.size() - 1;
//             int i = start, prod = 1;
    
//             while (i <= end) {
//                 prod *= nums[i];
    
//                 while (prod >= k && start <= i) {  // Shrink window if product is invalid
//                     prod /= nums[start];
//                     start++;
//                 }
    
//                 count += (i - start + 1);  // Count all valid subarrays ending at 'i'
//                 // count++;
//                 i++;
//             }
//             return count;
//         }
// int main()
// {
//     vector<int>nums={5,10,2,6};
//     int k=100;
//     int count = numSubarrayProductLessThanK(nums,k);
//     cout<<count;
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     // vector<int> nums = {3,2,-6,3,-2,0,6};
//     vector<int> nums = {-2,3,4,-1,0-2,3,1,4,0,4,6,-1,4};
//     int countNegs = 0, minPivot = INT32_MIN, minPivotIndex = -1, n = nums.size();
//     for(int i=0;i<n;i++){
//         if(nums[i]<0){
//             countNegs++;
//             if(nums[i]>minPivot){
//                 minPivot = nums[i];
//                 minPivotIndex = i;
//             }
//         }
//     }
//     // cout<<minPivot<<" "<<minPivotIndex<<endl;
//     int ans = 1, prefix = 1, suffix = 1,maxProd = 1;
//     if(countNegs % 2 == 0){
//         for(int i:nums){
//             if(i==0){
//                 maxProd = max(ans,maxProd);
//                 ans = 1;
//                 continue;
//             }
//             ans *= i;
//             // maxProd = ans;
//         }
//         cout<<maxProd;
//         return 0;
//     }
//     else{
//         int i = 0, j = n-1;
//         while(i<minPivotIndex){
//             if(nums[i]==0){
//                 maxProd = max(maxProd,prefix);
//                 prefix = 1;
//                 continue;
//             }
//             prefix *= nums[i++];
//         }
//         while(j>minPivotIndex){
//             if(nums[i]==0){
//                 maxProd = max(maxProd,suffix);
//                 suffix = 1;
//                 continue;
//             }
//             suffix *= nums[j--];
//         }
//         maxProd = max(maxProd,max(prefix,suffix));
//     }
//     cout<<ans;
    
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums = {3,2,-1,4,-6,3,-2,6};
    int n = nums.size();
    int maxi = 1, prefix = 1,suffix = 1;
    for(int i=0;i<n;i++){
        if(prefix == 0){
            prefix = 1;
        }
        if(suffix == 0){
            suffix = 1;
        }
        prefix *= nums[i];
        suffix *= nums[n-i-1];
        maxi = max(maxi,max(prefix,suffix));
    }
    cout<<maxi;    
    return 0;
}
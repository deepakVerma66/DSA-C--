// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     // vector<int> nums = {3,1,-2,5,-2,-4};
//     // vector<int> nums = {-1,4,1,1,4,-2,-1,-1};
//     vector<int> nums = {1,2,3,-1,-2,-3};
//     for(int i=0;i<nums.size();i++){
//         if(i%2==0){
//             if(nums[i]<0){
//                 for(int j=i+1;j<nums.size();j++){
//                     if(nums[j]>0){
//                         swap(nums[i],nums[j]);
//                         // continue;
//                         break;
//                     }
//                 }
//             }
//         }
//         else{
//             if(nums[i]>0){
//                 for(int j=i+1;j<nums.size();j++){
//                     if(nums[j]<0){
//                         swap(nums[i],nums[j]);
//                         break;
//                     }
//                 }
//             }
//         }
//     }
//     for(int i=0;i<nums.size();i++){
//         cout<<nums[i]<<" ";
//     }
    
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     // vector<int> nums = {3,1,-2,-5,2,4};
//     // vector<int> nums = {1,2,3,4,-1,-2,-3,-4};
//     vector<int> nums = {-1,-2,-3,-4,1,2,3,4};
//     vector<int> newArr;
//     for(int i=0;i<nums.size();i++){
//         if(i%2==0){
//             if(nums[i]>0){
//                 newArr.push_back(nums[i]);
//             }
//             else{
//                 for(int j=i+1;j<nums.size();j++){
//                     if(nums[j]>0){
//                         newArr.push_back(nums[j]);
//                         swap(nums[i],nums[j]);
//                         break;
//                     }
//                 }
//             }
//         }
//         else{
//             if(nums[i]<0){
//                 newArr.push_back(nums[i]);
//             }
//             else{
//                 for(int j=i+1;j<nums.size();j++){
//                     if(nums[j]<0){
//                         newArr.push_back(nums[j]);
//                         swap(nums[i],nums[j]);
//                         break;
//                     }
//                 }
//             }
//         }
//     }
//     for(int i:newArr){
//         cout<<i<<" ";
//     }
    
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> nums = {1,2,3,4,5,-1,-2,-3,-4,-5};
//     vector<int> pos,neg;
//     for(int i:nums){
//         if(i>0){pos.push_back(i);}
//         else{neg.push_back(i);}
//     }
//     vector<int> newArr;
//     int i=0,j=0,k=0;
//     while(i<pos.size() || j<neg.size()){
//         if(k%2==0){
//             newArr.push_back(pos[i++]);
//         }
//         else{
//             newArr.push_back(neg[j++]);
//         }
//         k++;
//     }
//     for(int l : newArr){
//         cout<<l<<" ";
//     }
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums = {1,2,3,4,5,-1,-2,-3,-4,-5};
    int n = nums.size();
    vector<int> ans(n,0);
    int i=0,j=1;
    for(int it:nums){
        if(it>0){
            ans[i]=it;
            i+=2;
        }
        else{
            ans[j] = it;
            j+=2;
        }
    }
    for(int k:ans){
        cout<<k<<" ";
    }
    
    return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int arr1[] = {1,2,3};
//     int arr2[] = {2,5,6};
//     int size1 = sizeof(arr1)/sizeof(arr1[0]);
//     int size2 = sizeof(arr2)/sizeof(arr2[0]);
//     int size3 = size1+size2;
//     int arr3[size3];
//     int i=0,j=0,k=0;
//     while(i<size1 && j<size2){
//         if(arr1[i]<arr2[j]){
//             arr3[k++] = arr1[i++];
//             // i++;
//             // k++;
//         }
//         else{
//             arr3[k++] = arr2[j++];
//             // j++;
//             // k++;

//         }
//     }
//     while(i<size1){
//         arr3[k++] = arr1[i++];
//         // i++;
//         // k++;
//     }
//     while(j<size2){
//         arr3[k++] = arr2[j++];
//         // j++;
//         // k++;
//     }
//     // for(int l=0;l<size3;l++){
//     //     cout<<arr3[l]<<" ";
//     // }

    

// }



//  This program does merging using extra vector
// In the next approach we will do the same without using extra space


// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//         vector <int> nums1={1,3,5,7,9};
//         vector <int> nums2 = {2,4,6,8,10};
//         int i=0,j=0,k=0;
//         vector <int> nums3;
//         while(i<nums1.size() && j<nums2.size()){
//             if(nums1[i]<nums2[j]){
//                 nums3.push_back(nums1[i++]);
//             }
//             else{
//                 nums3.push_back(nums2[j++]);
//             }
//         }
//         while(i<nums1.size()){
//             nums3.push_back(nums1[i++]);
//         }
//         while(j<nums2.size()){
//             nums3.push_back(nums2[j++]);
//         }
//         for(int l=0;l<nums3.size();l++){
//             cout<<nums3[l]<<" ";
//         }
//         if(nums3.size()%2==0){
//             int mid = nums3.size()/2;
//             double median = double((nums3[mid-1]+nums3[mid])/2.0);
//             cout<<median;
//         }
//         else{
//             int mid = nums3.size()/2;
//             double median = nums3[mid];
//             cout<<median;
//         }
//     return 0;
// }


//Another approach without using extra space

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = nums1.size();
    int n = nums2.size();
    int n1 = m-n-1;
    int n2 = n-1;
    int n3 = m-1;
    while( n1>=0 && n2>=0){
        if(nums1[n1]>nums2[n2]){
            nums1[n3--]=nums1[n1--];
        }
        else{
            nums1[n3--]=nums2[n2--];
        }
    }
    for(int i=0;i<m;i++){
        cout<<nums1[i]<<" ";
    }
    
    return 0;
}
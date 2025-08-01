#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums1 = {1,3,5,7,9,32,33};
    vector<int> nums2 = {0,2,4,6,8,20,21,56};
    int i=0,j=0;
    int n1=nums1.size();
    int n2=nums2.size();
    while(i<n1+n2){
        if(nums2[j]<nums1[i]){
            nums1.insert(nums1.begin()+i,nums2[j++]);
            // i++;
        }
        else{
            i++;
        }
    }
    // while(i<n1){
    //     nums1.insert(nums1.begin()+i,nums1[i++]);
    // }
    // while(j<n2){
    //     nums1.insert(nums1.begin()+i,nums2[j++]);
    // }
    for(int i:nums1){
        cout<<i<<" ";
    }
    return 0;
}
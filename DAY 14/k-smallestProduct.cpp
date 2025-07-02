#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> nums1 = {-100000,100000};
    vector<int> nums2 = {-100000,100000};
    int k=1;
    vector<int> productVector;
    for(int i=0;i<nums1.size();i++){
        for(int j=0;j<nums2.size();j++){
            productVector.push_back(nums1[i]*nums2[j]);
        }
    }
    sort(productVector.begin(),productVector.end());
    for(int i:productVector){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<productVector[k-1];
    
    return 0;
}
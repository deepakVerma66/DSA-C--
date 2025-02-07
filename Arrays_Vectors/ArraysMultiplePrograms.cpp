#include<iostream>
#include<vector>
using namespace std;
int main(){

    // Finding unique number in an array
    // in case if there are multiple unique values in the array

    // int arr[] = {40,50,12,44,12,50,16},n = sizeof(arr)/sizeof(arr[0]);
    // for(int i = 0;i<n;i++){
    //     int flag = 0,j=0;
    //     int num = arr[i];
    //     while(j<n){
    //         if(arr[j]==num){
    //             flag++;
    //         }
    //         j++;
    //     }
    //     if(flag==1){
    //         cout<<num<<" ";
    //     }
    // }

    // // in case if there is only one unique number in the array
    // int arr[] = {44,4,50,12,44,12,50};
    // int ans = 0,size = sizeof(arr)/sizeof(arr[0]);
    // for(int i = 0;i<size;i++){
    //     ans = ans^arr[i];
    // }
    // cout<<ans;

    //finding duplicate number
    // int arr[10];
    // int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<"ENter elements:";
    // for(int i=0;i<size;i++){
    //     cin>>arr[i];
    // }
    
    // for(int i=0;i<size;i++){
    //     int flag=0;
    //     for(int j=i+1;j<size;j++){
    //         if(arr[i]==arr[j]){
    //             flag++;
    //         }
    //     }
    //     if(flag==1){
    //         cout<<arr[i]<<" ";
    //     }
    // }

    // in case if there is only one duplicate number in the array
    // int arr[] = {1,2,3,4,5,4};
    // int ans = 0,size = sizeof(arr)/sizeof(arr[0]);
    // for(int i = 0;i<size;i++){
    //     ans = ans^arr[i];
    // }
    // for(int i=1;i<size;i++){
    //     ans^=i;
    // }
    // cout<<"Duplicate value is:"<<ans;

    //Intersection of arrays


    // int n1,n2;
    // cout<<"Enter the size of the first array:";
    // cin>>n1;
    // cout<<"Enter the size of the second array:";
    // cin>>n2;
    // int arr1[n1];
    // int arr2[n2];
    // cout<<"Enter "<<n1<<" elements of first array:";
    // for(int i=0;i<n1;i++){
    //     cin>>arr1[i];
    // }
    // cout<<"Enter "<<n2<<" elements of Second array:";
    // for(int i=0;i<n2;i++){
    //     cin>>arr2[i];
    // }

    int arr1[] = {3,6,9,12,15,18,21,6,2};
    int arr2[] = {2,4,6,8,10,6,12};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    
    for(int i=0;i<n1;i++){
        int flag=0;
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                flag++;
                arr2[j]=INT8_MIN;//very important line
            }
        }
        if(flag>0){
            cout<<arr1[i]<<" ";
            
        }
    }

    //Union of arrays  
    // Incomplete

    // int arr1[] = {2,4,6,8,10,12};
    // int arr2[] = {3,6,9,12,15,18,21};Z

    // int n1 = sizeof(arr1)/sizeof(arr1[0]);
    // int n2 = sizeof(arr2)/sizeof(arr2[0]);
    
    // for(int i=0;i<n1;i++){
    //     for(int j=0;j<n2;j++){
    //         if(arr1[i]==arr2[j]){
    //             cout<<arr1[i]<<" ";
    //         }
    //         if(arr1[i]!=arr2[j]){

    //         }
    //     }
    // }


    // Pair Sum//Triplet sum

    // int arr[]={1,2,3,4,5,6,7,8,9};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // vector <int> v;
    // int target = 10;
    // for(int i=0;i<n;i++){
    //     // int pivot = arr[i];
    //     for(int j=i+1;j<n;j++){
    //         //for(int k=j+1;k<n;k++){
    //           if(arr[i]+arr[j]+arr[k]==target){
    //                 // v.push_back(min(arr[k],min(arr[i],arr[j])));
    //                 // v.push_back(max(arr[k],max(arr[i],arr[j])));
    //                 v.push_back(arr[i]);
    //                 v.push_back(arr[j]);
    //                 //v.push_back(arr[k]);
    //            // }
    //         }
    //     }
    // }
    // for(int i=0;i<v.size();i++){//or use  
    //     cout<<v[i]<<" ";
    // }

    // Sort 0's and 1
    //Two pionter

    // int arr[]={0,1,0,0,1,1};
    // int i=0,j=5;
    // while(i<j){
    //     if(arr[i]==0 ){
    //         i++;
    //     }
    //     if(arr[j]==1){
    //         j--;
    //     }
    //     if(arr[i]==1 && arr[j]==0){
    //         swap(arr[i],arr[j]);
    //         i++;
    //         j--;
    //     }
    // }
    // for(int i:arr){
    //     cout<<i<<" ";
    // }
    return 0;
}
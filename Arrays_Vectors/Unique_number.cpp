#include<iostream>
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

    // //finding duplicate number
    // int arr[] = {1,2,3,4,5,3,4,6,6,2,1};
    // int size = sizeof(arr)/sizeof(arr[0]);
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

    //Intersection of arrays

    // int arr1[] = {3,6,9,12,15,18,21,24};
    // int arr2[] = {6,12,18,24,30,6};
    // int n1 = sizeof(arr1)/sizeof(arr1[0]);
    // int n2 = sizeof(arr2)/sizeof(arr2[0]);
    // for(int i=0;i<n1;i++){
    //     int flag=0;
    //     for(int j=0;j<n2;j++){
    //         if(arr1[i]==arr2[j]){
    //             flag++;
    //         }
    //     }
    //     if(flag>0){
    //         cout<<arr1[i]<<" ";
    //     }
    // }

    //Union of arrays

    // int arr1[] = {2,4,6,8,10,12};
    // int arr2[] = {3,6,9,12,15,18,21};

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
    return 0;
}
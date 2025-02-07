#include<iostream>
using namespace std;

int main(){
    int arr[]={3,4,5,29,6,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0,end=n-1;
    int mid = start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    cout<<"Peak Element is: "<<arr[mid];

    
    
}
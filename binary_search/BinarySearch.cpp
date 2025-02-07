#include<iostream>
using namespace std;

int firstOccurence(int arr[],int size,int key){
    // int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0,end = size,mid = 0,firstOccr;
    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid]==key){
            firstOccr = mid;
            end = mid-1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return firstOccr;
}
int lastOccurence(int arr[],int size,int key){
    // int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0,end = size,mid = 0,lastOccr;
    while(start<=end){
        mid = start + (end-start)/2;
        if(arr[mid]==key){
            lastOccr = mid;
            start = mid+1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return lastOccr;
}

int main(){
    // int arr[] = {10,15,20,25,30,35,40,55,60,70,80,90,100};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // int start = 0,end = size,mid=0,key;
    // cout<<"Enter the Key:";
    // cin>>key;
    // while(start<=end){
    //     //mid = (start+end)/2;
    //     mid = start + (end-start)/2;
    //     if(key==arr[mid]){
    //         cout<<"Element found at "<<mid<<" position..";
    //         return 0;
    //     }
    //     else if(key<arr[mid]){
    //         end = mid-1;
    //     }
    //     else{
    //         start = mid+1;
    //     }
        
    // }
    // cout<<"Element Not Present";

    //return the First and last position of an element in an array

    int arr[] = {1,1,2,4,4,4,5,6,6};
    // int size = sizeof(arr)/sizeof(arr[0]);
    
    
    cout<<"First Occurence of key is:"<<firstOccurence(arr,8,4)<<endl;
    cout<<"Last Occurence of the key is:"<<lastOccurence(arr,8,4);


    return 0;
}
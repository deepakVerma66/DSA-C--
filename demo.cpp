#include<iostream>
using namespace std;
bool search(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }       
    }
    return 0;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int key;
    cout<<"Enter element to search:";
    cin>>key;
    bool found = search(arr,10,key);
    if(found){
        cout<<"Element found in array";
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}
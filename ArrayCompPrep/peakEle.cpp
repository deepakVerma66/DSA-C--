#include<iostream>
using namespace std;
void peakElement(int arr[],int size){
    for(int i=1;i<size-1;i++){
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
            cout<<endl<<arr[i]<<" is a peak Element.!";
        }
    }
}
void printArray(int arr[],int size){
    cout<<"Array is"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {2,4,5,6,11,0,1,4,7,8,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,size);
    peakElement(arr,size);
}
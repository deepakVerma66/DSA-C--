// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {7,6};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }   
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }




#include<iostream>
using namespace std;
void bubbleSort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }  
}

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {23,12,44,2,12,45,31,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    printArray(arr,size);
}
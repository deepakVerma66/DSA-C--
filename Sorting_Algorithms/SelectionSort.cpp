// //Selection Sort

// #include<iostream>
// using namespace std;

// void selectionSort(int arr[],int size){ 
//     for(int i=0;i<size-1;i++){
//         int minIndex = i;
//         for(int j=i+1;j<size;j++){
//             if(arr[j]<arr[minIndex]){
//                 minIndex=j;
//             }
//         }
        
//         if(minIndex!=i){
//             swap(arr[minIndex],arr[i]);
//         }
//     }
// }

// int main(){
//     int arr[]={25,12,10,89,24,60};
//     int n = sizeof(arr)/sizeof(arr[0]);
    
//     selectionSort(arr,n);
//     cout<<"Sorted Array:";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
//Time complexity O(n^2)


#include<iostream>
using namespace std;

void selectionSort(int arr[],int size){// used in case when there is a small array to sort
    int minIndex = 0;
    for(int i=0;i<size-1;i++){
        minIndex = i;
        for(int j=i+1;j<size;j++){
            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }
        }
        if(minIndex!=i){
            swap(arr[minIndex],arr[i]);
        }
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {20,9,40,3,22,60,111};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    printArray(arr,n);
}


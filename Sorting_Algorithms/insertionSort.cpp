// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={10,9,8,17,60,5,24,13,2,90};
//     for(int i=1;i<10;i++){
//         int temp = arr[i];
//         int j = i-1;
//         for(;j>=0;j--){
//             if(arr[j]>temp){
//                 arr[j+1] = arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1] = temp;
//     }
//     for(int i=0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }
// }

#include <iostream>
using namespace std;

void insertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={10,9,8,17,60,5,24,13,2,90};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,size);
    printArray(arr,size);
}
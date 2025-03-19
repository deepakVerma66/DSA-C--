// #include<iostream>
// using namespace std;
// void inputArray(int arr[],int size){
//     cout<<"Enter "<<size<<" elemnets:";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
// }
// void reverseArray(int arr[],int size){
//     int temp=0;
//     for(int i=0;i<size/2;i++){
//         // swap(arr[i],arr[size-i-1]);
//         temp = arr[i];
//         arr[i] = arr[size-i-1];
//         arr[size-i-1] = temp;
//     }
// }
// void printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<endl<<arr[i]<<" ";
//     }
// }
// int main(){
//     int size;
//     cout<<"Input the size of ther array:"<<endl;
//     cin>>size;
//     int arr[size];
//     inputArray(arr,size);
//     cout<<"Array before Reversing:"<<endl;
//     printArray(arr,size);
//     reverseArray(arr,size);
//     cout<<"Array after Reversing:"<<endl;
//     printArray(arr,size);
// }

//Reversing the Array using While Loop

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<"Original Array:"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     int start=0,end=size-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     cout<<endl<<"Array After Reveraing:"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0,end = size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
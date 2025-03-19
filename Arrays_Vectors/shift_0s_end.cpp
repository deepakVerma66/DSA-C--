#include<iostream>
#include<vector>
using namespace std;
// Approach 1
// int main(){
//     int arr[] = {1,0,2,3,2,0,0,4,5,1};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int i=0;
//     cout<<"Array Before shifting zeroes to end of the array:\n";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     for(int j=0;j<size;j++){
//         if(arr[j]!=0){
//             arr[i++] = arr[j];
//         }
//     }
//     while(i<size){
//         arr[i++] = 0;
//     }
//     cout<<"\nArray After shifting zeroes to end of the array:\n";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// //Approach 2 Storing the non zero elements in a temporary array and then inserting the array to the original array and then rewritting the remaining elements with 0
// int main(){
//     vector <int> v1 = {1,0,2,3,2,0,0,4,5,1};
//     vector <int> temp;
//     int j=0;
//     for(int i=0;i<v1.size();i++){
//         if(v1[i]!=0){
//             temp.push_back(v1[i]);
//         }
//     }
//     while(j<temp.size()){
//         v1[j] = temp[j];
//         j++;
//     }
//     while(j<v1.size()){
//         v1[j++] = 0;
//     }
//     for(int i=0;i<v1.size();i++){
//         cout<<v1[i]<<" ";
//     }
// }





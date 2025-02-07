#include<iostream>
using namespace std;
int main(){
    int arr1[] = {1,2,3,0,0,0};
    int arr2[] = {2,5,6};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int size3 = size1+size2;
    int arr3[size3];
    int i=0,j=0,k=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            arr3[k++] = arr1[i++];
            // i++;
            // k++;
        }
        else{
            arr3[k++] = arr2[j++];
            // j++;
            // k++;

        }
    }
    while(i<size1){
        arr3[k++] = arr1[i++];
        // i++;
        // k++;
    }
    while(j<size2){
        arr3[k++] = arr2[j++];
        // j++;
        // k++;
    }
    for(int l=0;l<size3;l++){
        cout<<arr3[l]<<" ";
    }
}
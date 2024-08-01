#include<iostream>
using namespace std;


int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int n = 7,start=0,end=6;
    // for(int i=0;i<n/2;i++){
    //     int temp = arr[i];
    //     arr[i] = arr[n-i-1];
    //     arr[n-i-1] = temp;
    // }

    while(start<=end){
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"Array after reversal - "<<endl;
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
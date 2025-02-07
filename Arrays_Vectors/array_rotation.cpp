// #include <iostream>
// using namespace std;

// int main(){
//     int a[]={1,2,3,4,5};
//     int n=sizeof(a)/sizeof(a[0]);
//     cout<<"Enter the rotation steps: ";
//     int steps;
//     cin>>steps;
//     for(int i=1;i<=steps%n;i++){
//         int temp=a[n-1];
//         for(int j=n-1;j>0;j--){
//             a[j]=a[j-1];
//         }
//         a[0]=temp;
//     }

//     cout<<"Array after the Rotation:"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }

//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n;
    cout<<"Enter the number of rotations:"<<endl;
    cin>>n;
    for(int i=0;i<n%(size);i++){
        int temp = arr[size-1];
        for(int j=size-1;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
    cout<<"Array after rotation:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
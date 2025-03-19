// // #include <iostream>
// // using namespace std;

// // int main(){
// //     int a[]={1,2,3,4,5};
// //     int n=sizeof(a)/sizeof(a[0]);
// //     cout<<"Enter the rotation steps: ";
// //     int steps;
// //     cin>>steps;
// //     for(int i=1;i<=steps%n;i++){
// //         int temp=a[n-1];
// //         for(int j=n-1;j>0;j--){
// //             a[j]=a[j-1];
// //         }
// //         a[0]=temp;
// //     }

// //     cout<<"Array after the Rotation:"<<endl;
// //     for(int i=0;i<n;i++){
// //         cout<<a[i]<<" ";
// //     }

// //     return 0;
// // }

// // Right Rotating Array k times

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int arr[] = {1,2,3,4,5,6};
// //     int size = sizeof(arr)/sizeof(arr[0]);
// //     cout<<"Array Before rotation:"<<endl;
// //     for(int i=0;i<size;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     int n;
// //     cout<<"Enter the number of rotations:"<<endl;
// //     cin>>n;
// //     for(int i=0;i<n%(size);i++){
// //         int temp = arr[size-1];
// //         for(int j=size-1;j>0;j--){
// //             arr[j]=arr[j-1];
// //         }
// //         arr[0]=temp;
// //     }
// //     cout<<"Array after rotation:"<<endl;
// //     for(int i=0;i<size;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     return 0;
// // }

// // // Left Rotating the array 
// //Approach 1
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int arr[] = {1,2,3,4,5,6,7,8,9,10};
// //     int size = sizeof(arr)/sizeof(arr[0]);
// //     cout<<"\nArray Before rotation:\n";
// //     for(int i=0;i<size;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     cout<<"\nEnter the number of rotation:\n";
// //     int n;
// //     cin>>n;
// //     for(int i=0;i<n%size;i++){
// //         int temp = arr[0];
// //         for(int j=1;j<size;j++){
// //             arr[j-1]=arr[j];
// //         }
// //         arr[size-1]=temp;
// //     }
// //     cout<<"Array After rotation:\n";
// //     for(int i=0;i<size;i++){
// //         cout<<arr[i]<<" ";
// //     }
// // }

// // // Approach 2 LIttle bit complex approach
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int arr[] = {1,2,3,4,5,6,7};
// //     int n = sizeof(arr)/sizeof(arr[0]);
// //     cout<<"Array Before Rotation\n";
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     int d;
// //     cout<<"\nEnter the number of rotation:\n";
// //     cin>>d;
// //     int temp[d];
// //     for(int i=0;i<d;i++){//getting all elements which are to be rotated into an array
// //         temp[i] = arr[i];
// //     }
// //     for(int i=d;i<n;i++){//Shifting the remaining elements to the front 
// //         arr[i-d] = arr[i];
// //     }
// //     for(int i=n-d;i<n;i++){//Copying the temp elemnts i.e. elements to be rotated in the right position
// //         arr[i] = temp[i-(n-d)];
// //         //can also do it as
// //         //arr[i] = temp[j++] initialising j=0 along with i at the starting of the for loop
// //     }
// //     cout<<"Array after rotation "<<d<<" times\n";
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }
// // }

// //Most optimal approach


// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector <int> v1 = {1,2,3,4,5,6};
//     cout<<"Enter the rotations";
//     int steps,temp,n;
//     n=v1.size()-1;
//     cin>>steps;
//     for(int i=1;i<=steps%n;i++){
//         temp = v1[0];
//         for(int j=1;j<n;j++){
//             v1[j-1]=v1[j];
//         }
//         v1[n-1] = temp;
//     }
//     for(int k=0;k<n;k++){
//         cout<<v1[k]<<" ";
//     }
//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v1 = {1,2,3,4,5,6};
//     int n=v1.size();
//     cout<<"Enter the rotations:"<<endl;
//     int k;
//     cin>>k;
//     int temp=0;
//     for(int i=1;i<=k%n;i++){
//         temp = v1[n-1];
//         for(int j=n-2;j>=0;j--){
//             v1[j+1]=v1[j];
//         }
//         v1[0]=temp;
//     }
//     for(int i=0;i<n;i++){
//         cout<<v1[i]<<" ";
//     }
//     return 0;
// }

//Method Reverse
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v1 = {1,2,3,4,5,6};
    int n = v1.size()-1,k;
    cout<<"Enter the number of rotations:"<<endl;
    cin>>k;
    reverse(v1[k],v1[n]);
    reverse(v1[0],v1[k-1]);
    reverse(v1[0],v1[n]);
    return 0;
}
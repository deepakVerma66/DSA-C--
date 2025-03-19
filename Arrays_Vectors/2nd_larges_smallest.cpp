// #include <iostream>
// using namespace std;

// // int largestNumberIndex(int arr[],int size){
// //     int max = arr[0];
// //     int maxIndex = -1;
// //         for(int j=0;j<6;j++){
// //             if(arr[j]>max){
// //                 max = arr[j];
// //                 maxIndex = j;
// //             }
// //         }
// //     return maxIndex;
// // }
// int main()
// {
//     int arr[6];
//     cout << "Enter the 6 Elements:\n";
//     for (int i = 0; i < 6; i++)
//     {
//         cin >> arr[i];
//     }

//     //     //Bit manipulation Approach
//     //     // int largestIndex = largestNumberIndex(arr,6);
//     //     // cout<<"\nAnd The largets number in the array is: "<<arr[largestIndex];
//     //     // arr[largestIndex] = -1;
//     //     // int secondLargestIndex = largestNumberIndex(arr,6);
//     //     // cout<<"The Second largest Number in the array is:"<<arr[secondLargestIndex];

//     // Normal Approach
//     int first_largest = arr[0];
//     int second_largest = -1; //will take INT_MIN in case when there exists negative numbers in the array otherwise -1 will work
//     int first_smallest = arr[0];
//     int second_smallest = INT8_MAX;
//     for (int i = 0; i < 6; i++)
//     {
//         if (arr[i] >= first_largest)
//         {
//             // second_largest = first_largest; //giving probelm on case of repetitive largest number 1 2 3 7 7 5
//             first_largest = arr[i];
//         }
//         else if (arr[i] > second_largest && arr[i] != first_largest)
//         {

//             second_largest = arr[i];
//         }
//         if(arr[i]<first_smallest){
//             first_smallest = arr[i];
//         }
//         else if(arr[i]<second_smallest && arr[i]!=first_smallest){
//             second_smallest = arr[i];
//         }
//     }
//     // for(int i=0;i<6;i++){
//     //     if(arr[i]>=first_largest){
//     //         first_largest=arr[i];
//     //     }
//     // }
//     // for(int i=0;i<6;i++){
//     //     if(arr[i]>second_largest && arr[i]!=first_largest){
//     //         second_largest=arr[i];
//     //     }
//     // }

//     cout << "First Largest: " << first_largest << endl
//          << "Second Largest: " << second_largest<<endl;
//     cout << "First Smallest: " << first_smallest << endl
//          << "Second Smallest: " << second_smallest;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector <int> v1 = {2,4,18,1,0,15};
//     int maxIndex,max;
//     cout<<"Enter which largest number you want\n";
//     int round;
//     cin>>round;
//     for(int i=1;i<=round;i++){
//         max = INT16_MIN;
//         for(int j=0;j<v1.size();j++){
//             if(v1[j]>max){
//                 max = v1[j];
//                 maxIndex = j;
//             }
//         }
//         cout<<i<<" largest Number: "<<max<<endl;
//         v1[maxIndex] = INT16_MIN;
//     }
//     // cout<<v1[2];
//     for(int i=0;i<v1.size();i++){
//         cout<<v1[i]<<" ";
//     }
//     return 0;
// }



#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1 = {45,-2,4,18,11,10,15,33,1};
    int n = v1.size()-1;
    int first_largest=v1[0];
    int second_largest=INT8_MIN;
    int first_smallest = v1[0];
    int second_smallest = INT32_MAX;
    for(int i=0;i<=n;i++){
        if(v1[i]>=first_largest ){
            // second_largest = first_largest; it was giving wrong answer if the required value is at the starting of the array
            first_largest = v1[i];
        }
        else if(v1[i]>second_largest && v1[i]!=first_largest){
            second_largest = v1[i];
        }
        if(v1[i]<first_smallest){
            first_smallest = v1[i];
        }
        else if(v1[i]<second_smallest && v1[i]!=first_smallest){
            second_smallest = v1[i];
        }
    }
    cout<<"First Largest = "<<first_largest<<endl;
    cout<<"Second Largest = "<<second_largest<<endl;
    cout<<"First Smallest = "<<first_smallest<<endl;
    cout<<"Second Smallest = "<<second_smallest<<endl;
    return 0;
}
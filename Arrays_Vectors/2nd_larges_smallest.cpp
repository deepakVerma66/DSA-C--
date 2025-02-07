#include <iostream>
using namespace std;

// int largestNumberIndex(int arr[],int size){
//     int max = arr[0];
//     int maxIndex = -1;
//         for(int j=0;j<6;j++){
//             if(arr[j]>max){
//                 max = arr[j];
//                 maxIndex = j;
//             }
//         }
//     return maxIndex;
// }
int main()
{
    int arr[6];
    cout << "Enter the 6 Elements:\n";
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    //     //Bit manipulation Approach
    //     // int largestIndex = largestNumberIndex(arr,6);
    //     // cout<<"\nAnd The largets number in the array is: "<<arr[largestIndex];
    //     // arr[largestIndex] = -1;
    //     // int secondLargestIndex = largestNumberIndex(arr,6);
    //     // cout<<"The Second largest Number in the array is:"<<arr[secondLargestIndex];

    // Normal Approach
    int first_largest = arr[0];
    int second_largest = -1; //will take INT_MIN in case when there exists negative numbers in the array otherwise -1 will work
    int first_smallest = arr[0];
    int second_smallest = INT8_MAX;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] >= first_largest)
        {
            // second_largest = first_largest; //giving probelm on case of repetitive largest number 1 2 3 7 7 5
            first_largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != first_largest)
        {

            second_largest = arr[i];
        }
        if(arr[i]<first_smallest){
            first_smallest = arr[i];
        }
        else if(arr[i]<second_smallest && arr[i]!=first_smallest){
            second_smallest = arr[i];
        }
    }
    // for(int i=0;i<6;i++){
    //     if(arr[i]>=first_largest){
    //         first_largest=arr[i];
    //     }
    // }
    // for(int i=0;i<6;i++){
    //     if(arr[i]>second_largest && arr[i]!=first_largest){
    //         second_largest=arr[i];
    //     }
    // }

    cout << "First Largest: " << first_largest << endl
         << "Second Largest: " << second_largest<<endl;
    cout << "First Smallest: " << first_smallest << endl
         << "Second Smallest: " << second_smallest;
}



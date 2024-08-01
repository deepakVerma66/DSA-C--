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
int main(){
    int arr[6];
    cout<<"Enter the Elements:\n";
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }

//     //Bit manipulation Approach
//     // int largestIndex = largestNumberIndex(arr,6);
//     // cout<<"\nAnd The largets number in the array is: "<<arr[largestIndex];
//     // arr[largestIndex] = -1;
//     // int secondLargestIndex = largestNumberIndex(arr,6);
//     // cout<<"The Second largest Number in the array is:"<<arr[secondLargestIndex];
    

    // Normal Approach
    int first_largest=INT32_MIN;
    int second_largest=INT32_MIN;
    

    // for(int i=0;i<6;i++){
    //     if(arr[i]>=first_largest){
            // second_largest = first_largest;
    //         first_largest=arr[i];
    //     }
    //     else if(arr[i]>second_largest && arr[i]!=first_largest){

    //         second_largest=arr[i];
    //     }
    // }
    for(int i=0;i<6;i++){
        if(arr[i]>=first_largest){
            first_largest=arr[i];
        }
    }
    for(int i=0;i<6;i++){
        if(arr[i]>second_largest && arr[i]!=first_largest){
            second_largest=arr[i];
        }
    }
    
    cout<<"First Largest: "<<first_largest<<endl<<"Second Largest: "<<second_largest;
}




// // C++ Program to illustrate how to find the second largest 
// // element in an array 
// #include <climits> 
// #include <iostream> 
// using namespace std; 

// int main() 
// { 
//     int array[6];
//     cout<<"Enter the Elements:\n";
//     for(int i=0;i<6;i++){
//         cin>>array[i];
//     }
	

// 	// Initialize first and second to the minimum possible 
// 	// value 
// 	int first = INT_MIN, second = INT_MIN; 

// 	// Traverse the array 
// 	for (int i = 0; i < 6; i++) { 
// 		// If current element is greater than first 
// 		if (array[i] > first) { 
// 			second = first; 
// 			first = array[i]; 
// 		} 
// 		// If current element is in between first and second 
// 		else if (array[i] > second && array[i] < first) { 
// 			second = array[i]; 
// 		} 
// 	} 

// 	// Print the second largest element 
// 	cout << "Second Largest Element in the Array: "
// 		<< second << endl; 

// 	return 0; 
// }

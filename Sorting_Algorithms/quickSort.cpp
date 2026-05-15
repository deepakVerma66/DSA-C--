// #include<iostream>
// using namespace std;
// int partition(int arr[],int s,int e){
//     int pivot = arr[s],count=0;
//     for(int i=s+1;i<=e;i++){
//         if(arr[i]<=pivot){
//             count++;
//         }
//     }
//     int pivotIndex = s+count;
//     swap(arr[s],arr[pivotIndex]);
//     int i=s,j=e;
//     while(i<pivotIndex && j>pivotIndex){
//         while(arr[i]<=pivot){
//             i++;
//         }
//         while(arr[j]>pivot){
//             j--;
//         }
//         if(i<pivotIndex && j>pivotIndex){
//             swap(arr[i],arr[j]);
//         }
//     }
//     return pivotIndex;
// }

// void quickSort(int arr[], int s, int e){
//     if(s>=e){
//         return;
//     }
//     int p = partition(arr,s,e);
//     quickSort(arr,s,p-1);
//     quickSort(arr,p+1,e);
    
// }
// int main(){
//     int arr[] ={10,1,9,2,8,3,7,4,6,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     quickSort(arr, 0, n-1);
//     cout<<"Sorted Array:"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }




#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int> &nums, int low, int high){
    int i=low, j = high, pivot = low;
    while(i<j){
        while(nums[i]<)
    }
}
void quickSort(vector<int> &nums, int low, int high){
    if(low<high){
        pivotIndex = partition(nums,low,high);
        quickSort(nums,low,pivotIndex-1);
        quickSort(nums,pivotIndex+1,high);
    }    
}
int main()
{
    vector<int> nums = {10,9,5,77,8,33,4,21,65,98,1,2,100};
    quickSort(nums,0,nums.size()-1);
    for(int i:nums){
        cout<<i<<" ";
    }
    
    return 0;
}
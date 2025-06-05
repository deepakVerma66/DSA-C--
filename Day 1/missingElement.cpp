#include<iostream>
#include<vector>
using namespace std;

// i.) Approach 1 -> Make an array with elements 1-n and then compare it with the elements of the given array and break the loop where the elements mismatch and meanwhile store that mismatched element and retunr that

// int main()
// {
//     vector <int> arr =  {1,2,4,5};
//     int n = 5;
//     int missingEle;
//     vector <int>  newarr;
//     for(int i=0;i<n;i++){
//         newarr.push_back(i+1);
//     }
//     for(int i=0;i<n-1;i++){
//         if(arr[i] != newarr[i]){
//             missingEle = newarr[i];
//             break;
//         }
//     }
//     cout<<"Missing Element : "<<missingEle;
//     return 0;
// }

// ii.) Approach 2 -> Take a variable and add to it the whole numbers till N and then subtract each element of the given array with the variale containing the sum and at the end you get the missing element

// int main(){
//     vector <int> arr = {1,2,4,5};
//     int n=5;
//     int sumEle=0;            We can calculate the sum of the whole numbers using the n(n+1)/2 formula and
//     for(int i=1;i<=n;i++){   reduce the Time complexity till O(N) which was O(2N) earlier
//         sumEle+=i;
//     }
//     // cout<<sumEle;
//     for(int i=0;i<n-1;i++){
//         sumEle-=arr[i];
//     }
//     cout<<sumEle;
// }


// Striver Approach -> XOR

int main(){
    vector <int> arr = {1,2,4,5};
    int n=5;
    int xor1 = 0, xor2 = 0;
    for(int i=0;i<n-1;i++){
        xor1^=(i+1);
        xor2^=arr[i];
    }
    xor1^=n;
    cout<<(xor1^xor2);
}
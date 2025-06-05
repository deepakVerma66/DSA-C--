#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// i.) My Approach 1 -> Store the sum count of consecutive 1's in the array and keep the count added to an array and then get the maximum of the array to get the maximum consecutive 1's

// int main()
// {
//     vector <int> arr = {1,1,0,1,1,1,1,0,1,1,1,0,1};
//     vector <int> countArr;
//     int count=0;
//     for(int i=0;i<arr.size();i++){
//         while(arr[i]==1){
//             count++;
//             i++;
//         }
//         countArr.push_back(count);
//         count = 0;
//     }
//     for(int i=0;i<countArr.size();i++){
//         cout<<countArr[i]<<" ";
//     }
//     auto max = max_element(countArr.begin(),countArr.end());
//     cout<<*max;
//     return 0;
// }



int main(){
    vector<int> arr = {1,1,0,1,1,1,1,0,1,1,1,1,1,0,1};
    int count = 0,maxOne = 0;
    for(int i=0;i<arr.size();i++){
        // if(arr[i]==1){
        //     count++;
        //     maxOne = max(count,maxOne);
        // } We will try to solve this using a while loop since there we need not to update the maxOne variable every time and we will only update the variable while we encounter a 0 after some or none 1
        while(arr[i]==1){
            count++;
            i++;
        }
        maxOne = max(count,maxOne);

        // else{
            count = 0;
        // }
    }
    cout<<maxOne;
}


// Ok so now if we compare that which code is more efficient the commented one or that active code
// Time complexity of both are same in the active code we need to make less max function call but the code using the if-else block is more readable 
// So if we want to make the code more readable then we will use if-else code and for larger array we ca go with while code
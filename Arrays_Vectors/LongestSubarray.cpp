#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vect = {1,2,3,1,1,1,1,4,2,3};
    vector <int> maxSubArrayLength;
    int target =20;
    int i=0,j,length=-1,sum;
    while(i<vect.size()){
        sum=0;j=i;
        while(j<vect.size()){
            sum += vect[j++];
            if(sum==target){
                length = j-i;
                maxSubArrayLength.push_back(length);
                break;
            }
            else if(sum>target){
                break;
            }
        }
        i++;
    }
    cout<<"Maximum length of subarray with target sum is:\n";
    int max = maxSubArrayLength[0];
    for(int i=0;i<maxSubArrayLength.size();i++){
        if(maxSubArrayLength[i]>max){
            max = maxSubArrayLength[i];
        }
    }
    cout<<max;
}


// //Program to calculate the number of subarrays
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] =  {1,2,3,4,5,6,7,8,9,10,55};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int count=0;
//     for(int i=0;i<size;i++){
//         for(int j=i;j<size;j++){
//             count++;
//         }
//     }
//     cout<<"Total number of Subarrays are: "<<count;
// }
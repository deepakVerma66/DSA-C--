#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,5,6,7,8,9,11,14},sum,target=11;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i+1;j<n;j++){
            sum = arr[i]+arr[j];
            if(sum>target){
                break;
            }
            else if(sum==target){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                break;
            }
        }
    }
    return 0;
}
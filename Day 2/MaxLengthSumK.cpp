#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> arr = {2,3,1,2,4,3,0,0,0,0,4}; 
    int i=0,j=0,sum = 0,k=7,length=0;
    while(j<arr.size()){
        sum+=arr[j];
        cout<<sum<<endl;
        if(sum>k){
            while(sum>k){
                sum-=arr[i++];
            }
        }
        if(sum==k){
            length = max(length,(j-i+1));
            cout<<"Length"<<j-i+1<<endl;
        }
        j++;
    }
    cout<<length;
    return 0;
}
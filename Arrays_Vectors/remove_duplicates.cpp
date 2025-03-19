// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     int arr[] = {1,5,2,2,2,3,4,4,4,55};
//     set <int> set;
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<size;i++){
//         set.insert(arr[i]);
//     }
//     cout<<"Unique Values are"<<endl;
//     for(int i:set){
//         cout<<i<<" ";
//     }

//     int index=0;
//     for(auto it:set){
//         arr[index++]=it;
//     }
//     // cout<<"\nnumber of unique values are: "<<set.size();
//     cout<<"\nNumber of unique values are: "<<index;
// } But this is not a good approach
// However it will work well for unsorted array

//Another approach in case when we have a sorted array
//Using Two pointer Approach
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,2,3,4,4,4,55};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i=0,j=1;
    while(i<=j && j<size){
        if(arr[j]!=arr[i]){
            arr[++i] = arr[j];
            //arr[i+1] = arr[j];
        }
        else{
            j++;
        }
    }
    cout<<"Number of unique numbers is: "<<i+1<<"\n";
    for(int k=0;k<=i;k++){
        cout<<arr[k]<<" ";
    }
}
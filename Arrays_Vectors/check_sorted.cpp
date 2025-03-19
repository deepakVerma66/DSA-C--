// #include<iostream>
// using namespace std;
// bool check_if_sorted(int arr[],int size){
//     for(int i=1;i<size-1;i++){
//         if(arr[i]>=arr[i-1]){
//             // return true;
//         }
//         else{
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int arr[] = {6,7,8,9,10,11,11,20,19};
//     bool flag = false;
//     flag=check_if_sorted(arr,9);
//     if(flag){
//         cout<<"Array Sorted";
//     }
//     else{
//         cout<<"Array Not Sorted.";
//     }
// }



#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v1 = {1,3,3,4,7,5,6};
    bool isSorted;
    for(int i=0;i<v1.size()-1;i++){
        if(v1[i]<=v1[i+1]){
            isSorted = true;
        }
        else{
            isSorted=false;
            break;
        }
    }
    if(isSorted==true){
        cout<<"Sorted";
    }
    else{
        cout<<"Not Sorted";
    }
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int a[] = {120,150,20,60,90};
    int n = sizeof(a)/sizeof(a[0]);
    int start = 0,end = n-1,mid = start + (end-start)/2;
    while(start<end){
        if(a[mid]>=a[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    cout<<"Pivot Element is: "<<a[start];

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Enter the rotation steps: ";
    int steps;
    cin>>steps;
    for(int i=1;i<=5%
    steps;i++){
        int temp=a[n-1];
        for(int j=n-1;j>=0;j--){
            a[j]=a[j-1];
        }
        a[0]=temp;
    }

    cout<<"Array after the Rotation:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
#include<iostream>
using namespace std;
// Mean of the array using recursion
double avg(int arr[],int sum,int i,int size){
    if(i==size){
        // cout<<"Average = "<<(float)sum/i;
        return float(sum)/i;
    }
    sum+=arr[i++];
    // cout<<sum<<endl;
    // cout<<i<<endl;
    return avg(arr,sum,i,size);
}

// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     int sum = 0,i=0,size = sizeof(arr)/sizeof(arr[0]);
//     cout<<"Average of the elements of the arrays is "<<avg(arr,sum,i,size);
//     // avg(arr,sum,i,size);    
//     // double average = avg(arr,sum,i,size);
//     // cout<<average;
//     return 0;
// }


// Reversing a number 
// int main(){
//     int n = 4;
//     int n1=n;
//     int sum=0,revnum=0;
//     while(n1>0){
//         int rem = n1%2;
//         // sum+=rem;
//         revnum = revnum*10+rem;
//         n1 = n1/2;
//         // cout<<"hello";
//     }
//     cout<<revnum;   
// }


// Printing a fibonacci series

// Using Recursion
void printFibbo(int a, int b, int n, int i){
    if(i!=n){
        if(n==1){
            cout<<0;
        }
        else if(n==2){
            cout<<0<<" "<<1;
        }
        else if(n>2){
            int c=a+b;
            a=b;
            b=c;
            cout<<c<<" ";
            printFibbo(a,b,n,++i);
        }
    }
    else{return;}
}
int main(){
    int n;
    cout<<"Enter the length if fibonacci Series\n";
    cin>>n;
    int a=0,b=1;
    // if(n>2){
    //     cout<<a<<" "<<b<<" ";
    //     for(int i=2;i<n;i++){
    //         int c=a+b;
    //         a=b;
    //         b=c;
    //         cout<<c<<" ";
    //     }
    // }
    // else if(n==1){
    //     cout<<0;
    // }
    // else if(n==2){
    //     cout<<0<<" "<<1;
    // }


    printFibbo(0,1,n,0);
}
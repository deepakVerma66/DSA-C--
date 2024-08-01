#include<iostream>
using namespace std;


// pass by Value 
//It leads to no change in the actual arguements
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main(){
//     int i = 6, j = 4;
//     swap(i,j);
//     cout<<i<<" "<<j<<".";
//     return 0;
// }


//pass by reference

void swap(int &x,int &y){
    int temp = x;
    x=y;
    y=temp;
}

void fun(int *x){
    cout<<x<<endl;//address of the variable
    cout<<*x;//value of the variable DEREFERENCING
    *x = 10; //change will reflect in the main program also
    return ;
}

int main(){
    // int x = 10;
    // int &y = x;// Pass by reference Another name for x(in simple terms)
    //using & at LHS acts as reference variable..
    // cout<<x<<" "<<y<<endl;

    // y=19;
    // cout<<x<<" "<<y;

    // int c = 20;
    // cout<<"Before Swapping: a="<<x<<" c="<<c<<endl;
    // swap(x,c);
    // cout<<"After Swapping: a="<<x<<" c="<<c;

    int x = 9;
    fun(&x); //using & at RHS acts as address of the variable
    cout<<x;
}

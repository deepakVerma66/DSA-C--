#include<iostream>
using namespace std;

int main()
{
    // Pattern 1 :-> Right Angled Triangle
    // cout<<"Right Angled Triangle\n";
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // return 0;

    // Pattern 2:-> Reverse Right Angled Triangle
    cout<<"Reverse Right Angled triangle\n";
    for(int i=1;i<=5;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int k=1;k<=5-i+1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
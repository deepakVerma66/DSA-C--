#include<iostream>
using namespace std;

int main()
{
    // // Pattern :-> Triangle
    // cout<<"Triangle Pattern\n";
    // int rows;
    // cout<<"Enter the number of Rows to print:\n";
    // cin>>rows;
    // for(int i=1;i<=rows;i++){
    //     for(int j=1;j<=rows-i;j++){
    //         cout<<"   ";
    //     }
    //     for(int k=1;k<=2*i-1;k++){
    //         cout<<" * ";//we can also remove space form both cout statements it is just to make the pattern look more clear and appealing
    //     }
    //     cout<<endl;
    // }


    // Pattern :-> Reverse Triangle
    cout<<"Reverse Triangle:->\n";
    for(int i=1;i<=5;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*(5-i+1)-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
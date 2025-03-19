#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i+1;j++){
            cout<<"*";
        }
        for(int k=1;k<=(i-1)*2;k++){
            cout<<" ";
        }
        for(int l=1;l<=5-(i-1);l++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=(2*5)-(2*i);k++){
            cout<<" ";
        }
        for(int l=1;l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
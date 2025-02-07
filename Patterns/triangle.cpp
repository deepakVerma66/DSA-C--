#include<iostream>
#include<string>

using namespace std;
int main(){
    // //Pattern 1
    // for(int i=4;i>=1;i--){

    //     for(int k=0;k<4-i;k++){
    //         cout<<' ';
    //     }
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //Pattern 2

    for(int i=7;i>=1;i--){
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;

void printPascalRow(int row){
    int ans = 1;
    cout<<ans<<" ";
    for(int i=1;i<row;i++){
        ans *= row-i;
        ans /= i;
        cout<<ans<<" ";
    }
    // cout<<endl;
}

int main()
{
    int rows;
    cout<<"Enter number of rows to print : "<<endl;
    cin>>rows;
    for(int i=1;i<=rows;i++){
        printPascalRow(i);
        cout<<endl;
    }
    return 0;
}
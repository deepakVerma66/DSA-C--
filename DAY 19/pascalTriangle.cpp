#include<iostream>
using namespace std;

void printPascalRow

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
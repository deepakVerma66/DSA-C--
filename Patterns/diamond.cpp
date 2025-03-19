#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout<<"Enter the number of rows:\n";
    cin>>rows;
    // Upper Part 
    for(int i=1;i<=rows/2;i++){
        for(int j=1;j<=(rows/2)-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    // Lower Part
    for(int i=1;i<=rows/2;i++){
        for(int k=1;k<=i-1;k++){
            cout<<" ";
        }
        for(int j=1;j<=2*((rows/2)-i+1)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

//here in the program lately used two loops as used now but used 5 instead of 10 i.e. the upper part of the diamond and lower part of the diamond was being printed indivdually and not as a whole diamond 
// But now i used rows as the entire length of the diamond and then used the half length of the diamond for upper part and used the second half for the lower part
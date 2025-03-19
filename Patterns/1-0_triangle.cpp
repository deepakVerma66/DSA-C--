#include<iostream>
using namespace std;
int main()
{
    bool flag = 1;
    for(int i=1;i<=5;i++){
        (i%2==0)?flag=0:flag=1;//This line makes the program possible as i saw a pattern that the rows at even number starts with 0 and odd ones start with 1
        for(int j=1;j<=i;j++){
            cout<<flag<<" ";
            flag=!flag;
        }
        cout<<endl;
        // flag =! flag;
    }
    return 0;
}
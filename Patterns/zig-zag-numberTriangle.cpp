#include<iostream>
using namespace std;
int main()
{
    int count=1;
    int rows;
    cout<<"Enter the number of rows to print:\n";
    cin>>rows;
    for(int i=1;i<=rows;i++){
        // for(int j=count;j<=count+i-1;j++){
            if(i%2==0){
                count+=i;
                for(int k=1;k<=i;k++){
                    cout<<count--;
                }
                count+=i;
            }
            else{
                for(int l=1;l<=i;l++){
                    cout<<count++;
                }
                // count-=1;
            }
        // }
        cout<<endl;
    }
    return 0;
}
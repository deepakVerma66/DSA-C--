#include<iostream>
#include<vector>
using namespace std;

vector<int> printPascalRow(int row){
    int ans = 1;
    vector<int> pRow;
    pRow.push_back(ans);
    // cout<<ans<<" ";
    for(int i=1;i<row;i++){
        ans *= row-i;
        ans /= i;
        // cout<<ans<<" ";
        pRow.push_back(ans);
    }
    return pRow;
    // cout<<endl;
}

int main()
{
    int rows;
    cout<<"Enter number of rows to print : "<<endl;
    cin>>rows;
    vector<int> pRow;
    vector<vector<int>> pascalTriangle;
    for(int i=1;i<=rows;i++){
        vector<int> pRow = printPascalRow(i);
        pascalTriangle.push_back(pRow);
        // cout<<endl;
    }
    for(auto i:pascalTriangle){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
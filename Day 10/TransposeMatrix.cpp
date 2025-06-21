#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<vector<int>> transposeMat(cols,vector<int>(rows));
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            transposeMat[j][i] = matrix[i][j];
            // cout<<"RUnning"<<endl;
            // cout<<matrix[i][j]<<" ";
        }
        // cout<<endl;
    }
    for(int i=0;i<transposeMat.size();i++){
        for(int j=0;j<transposeMat[i].size();j++){
            cout<<transposeMat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
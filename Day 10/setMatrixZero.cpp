#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> mat = {{-1},{2},{3}};
    int n = mat.size();
    int m = mat[0].size();
    int limit = 1e9 + 7;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            if(mat[i][j]==0){
                for(int k=0;k<m;k++){
                    if(mat[i][k]!=0){
                        mat[i][k]=limit;
                    }
                }
                for(int l=0;l<n;l++){
                    if(mat[l][j]!=0){
                        mat[l][j]=limit;
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==limit){
                mat[i][j]=0;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
// In this approach we are replacing the row and column, where 0 encounters, with a number limit(1e9+7)(earlier we replaced it with -1 but that caused problem since there already exists some elements which are -1 however this appproach can also cause error we are assuming that the limit number doesn't exists in the matrix) while iterating over the matrix wherever 0 is found that row and column is replaced with limit and in the next iteration we will replace the limit element with 1 and get the 
int main()
{
    vector<vector<int>> mat = {{-1,1},{2,1},{3,0}};
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
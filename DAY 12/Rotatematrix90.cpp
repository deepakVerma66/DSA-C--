#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> mat = {{1,3,5,7,9},{2,4,6,8,10},{11,13,15,17,19},{12,14,16,18,20},{21,23,25,27,29}};
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> matNew(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matNew[j][m-i-1] = mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matNew[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
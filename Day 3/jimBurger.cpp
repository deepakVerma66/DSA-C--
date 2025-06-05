#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<vector<int>> order = {{8,1},
                                 {4,2},
                                 {5,6},
                                 {3,1},
                                 {4,3}};
    int cust=0;
    int rowSum=0;
    vector<vector<int>>prepTime;
    vector<int>ord;
    for(int i=0;i<order.size();i++){
        for(int j=0;j<order[i].size();j++){
            // cout<<order[i][j]<<" ";
            rowSum+=order[i][j];
        }
        prepTime.push_back({rowSum,++cust});
        rowSum=0;
        // cout<<endl;
    }

    int col=0;
    sort(prepTime.begin(), prepTime.end(), [col](const vector<int>& a, const vector<int>& b) {
        return a[col] < b[col];
    });
    
    for(int i=0;i<prepTime.size();i++){
        for(int j=1;j<prepTime[i].size();j++){
            cout<<prepTime[i][j]<<" ";
            // ord.push_back(prepTime[i][j]);
        }
        // cout<<endl;
    }
    // for(int i:ord){
    //     cout<<i<<" ";
    // }



    
    return 0;
}
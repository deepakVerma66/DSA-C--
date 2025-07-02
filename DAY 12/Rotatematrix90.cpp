// #include<iostream>
// #include<vector>
// using namespace std;

// // Created a new Matrix which is rotated 90% By changing the indices of the elements

// int main()
// {
//     vector<vector<int>> mat = {{1,3,5,7,9},
//                                {2,4,6,8,10},
//                                {11,13,15,17,19},
//                                {12,14,16,18,20},
//                                {21,23,25,27,29}
//                               };
//     int n = mat.size();
//     int m = mat[0].size();
//     vector<vector<int>> matNew(n,vector<int>(m));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             matNew[j][m-i-1] = mat[i][j]; //The main logic
//         }
//     }

//     cout<<endl;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<matNew[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }



// Approach 2
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> nums = {{1,2,3,4},
                                {5,6,7,8},
                                {9,10,11,12},
                                {13,14,15,16}};
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums[i].size();j++){
            swap(nums[j][i],nums[i][j]);
        }
    }

    int col = nums[0].size();
    for(int i=0;i<nums.size();i++){
        int j=0;
        while(j<col/2){
            swap(nums[i][j],nums[i][col-j-1]);
            j++;
        }
    }

    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[i].size();j++){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
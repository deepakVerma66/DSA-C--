// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<set>
// using namespace std;
// int main()
// {
//     vector<int> nums = {-1,0,1,2,-1,-4};
//     // Approach 1 Brute trying every possible 
//     set <vector<int>> st;
//     for(int i=0;i<nums.size()-2;i++){
//         for(int j=i+1;j<nums.size()-1;j++){
//             for(int k=j+1;k<nums.size();k++){
//                 if(nums[i]+nums[j]+nums[k]==0){
//                     vector<int> temp = {nums[i],nums[j],nums[k]};
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
//             }
//         }
//     }
    
//     vector<vector<int>> list(st.begin(),st.end());
//     // But this approach being to high in time complexity causes TLE 
    
//     return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<set>
// // #include<unordered_map>
// using namespace std;
// int main()
// {
//     // Approach 2 fixing 2 pointers and finding for 
//     vector<int> nums = {-1,0,1,2,-1,-4};
//     set <vector<int>> st;
//     // vector<vector<int>> newList;
//     for(int i=0;i<nums.size()-1;i++){
//         // unordered_map <int,int> mpp;
//         set<int> hashset;
//         for(int j=i+1;j<nums.size();j++){
//             int third = 0-(nums[i]+nums[j]);
//             if(hashset.find(third)!=hashset.end()){
//                 vector<int> temp = {nums[i],nums[j],third};
//                 sort(temp.begin(),temp.end());
//                 st.insert(temp);
//             }
//             // mpp[]
//             hashset.insert(nums[j]);
//         }
//     }
//     vector<vector<int>> newList(st.begin(),st.end());
//     for(auto i:newList){
//         for(auto j:i){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> nums = {-1,0,1,2,-1,-4};
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for(int i=0;i<nums.size();i++){
        if(i!=0 && nums[i]==nums[i-1]){
            continue;
        }
        int j = i+1;
        int k=nums.size()-1;
        while(j<k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum>0){
                k--;
            }
            else if(sum<0){
                j++;
            }
            else{
                vector<int> temp = {nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]) j++;
                while(j<k && nums[k]==nums[k+1]) k--;
            }
        }
    }
    for(auto it:ans){
        for(auto j:it){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
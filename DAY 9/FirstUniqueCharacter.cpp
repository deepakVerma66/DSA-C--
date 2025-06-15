// #include<iostream>
// #include<vector>
// #include<string>
// #include<unordered_map>
// using namespace std;
// int main()
// {
//     // string s = "leetcode";
//     // string s = "leetcode";
//     // string s = "abcdabcde";
//     string s = "abcdabcd";

//     // Approach 1.) I was thinking for this approach but this failed since the order of accessing the element is not same as that of the order of insertion So this approach will not work here hence
//     // unordered_map<char,int> mpp;
//     // for(char c:s){
//     //     mpp[c]++;
//     // }
//     // for(auto it:mpp){
//     //     cout<<it.first<<" "<<it.second<<endl;
//     // }

// Using this approach in some other way will work the solution is after this solution below

//     for(int i=0;i<s.length();i++){
//         int j=0,cnt=0;
//         while(j<s.length()){
//             if(s[j]==s[i] && i!=j){
//                 cnt++;
//                 break;
//             }
//             j++;
//         }
//         if(cnt==0){
//             cout<<i;
//             return 0;
//         }
//     }
//     cout<<-1;
//     return 0;
// }



#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    string s = "abcdeabcdef";
    unordered_map<char, int> freq;
    
    for (char c : s) {
        freq[c]++;
    }

    for (int i = 0; i < s.length(); i++) {
        if (freq[s[i]] == 1){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}
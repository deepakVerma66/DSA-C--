#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main()
{
    // // string s = "abababcabb";
    string s = "pwwkew";
    // string s = "abcbde";  
    int count = 0,largestlen=1;
    unordered_map<char,int> umap;
    for(char ch:s){
        umap[ch]++;
        if(umap[ch]>1){
            umap.clear();
            // largestlen = max(largestlen,count);
            umap[ch]++;
            count = 1;
        }else{
            count++;
        }
        largestlen = max(largestlen,count);
    }
    cout<<largestlen;
    return 0;
}
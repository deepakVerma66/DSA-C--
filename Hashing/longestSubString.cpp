#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    // string s = "ababababb";
    // string s = "bbbbb";
    string s = "abcbde";  
    int count;
    for(int i=0;i<s.length();i++){
        count = 0;
        map<char,int> charCount;
        for(int j=i;j<s.length();j++){
            charCount[s[j]]++;
            if(charCount[s[i]]<=1){
                count++;
            }
            else{
                break;
            }
        }
    }
    cout<<count;
    return 0;
}
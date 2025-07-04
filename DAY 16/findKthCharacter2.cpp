#include<iostream>
#include<string>
#include<vector>
using namespace std;
char kthCharacter(int k,vector<int> &operations){
    string word = "a";
    for(int i:operations){
        if(i==0){
            int len = word.length();
            for(int i=0;i<len;i++){
                word.push_back(word[i]);
            }
        }
        else{
            int len = word.length();
            for(int i=0;i<len;i++){
                char next = (word[i]=='z'?'a':(word[i]+1));
                word.push_back(next);
            }
        }
    }
    return word[k-1];
}
int main()
{
    int k=10;
    vector <int> operations = {0,1,0,1};
    char ch = kthCharacter(k,operations);
    cout<<ch;
    return 0;
}
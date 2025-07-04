#include<iostream>
#include <string>
using namespace std;
char findKthCharacterInString(int k){
    int n=k;
    string word = "z";
    string newWord = "";
    while(true){
        int len = word.length();
        if(len<k){
            for(int i=0;i<len;i++){
                word.push_back(word[i]+1);
            }
            cout<<word<<endl;
        }
        else{
            return word[n-1];
        }
    }
}
int main()
{
    int k=5;
    char ch = findKthCharacterInString(k);
    
    cout<<ch;
    return 0;
}
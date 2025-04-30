#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    string s = "abcdabejc";
    map<char,int> freq;
    for(auto i:s){
        freq[i]++;
    }
    for(auto i:freq){
        cout<<i.first<<" : "<<i.second<<endl;
    }
    return 0;
}
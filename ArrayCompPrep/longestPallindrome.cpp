#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    string s = "racecarxyz";
    bool flag = false;
    map <char,int> length;
    for(char ch : s){
        length[ch]+=1;
    }
    // for(auto i : length){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    int count=0;
    for(auto i : length){
        if(i.second==1 && flag==false){
            count+=1;
            flag = true;
        }
        else if(i.second%2==0){
            count+=i.second;
        }
        else if(i.second%2!=0){
            count+=i.second-1;
            if(flag==false){
                count+=1;
                flag = true;
            }
        }
    }
    cout<<count;
    return 0;
}
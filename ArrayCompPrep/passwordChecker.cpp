#include<iostream>
#include<string>
using namespace std;
int main()
{
    // string str = "aA1_67";
    // string str = "a987 2967";
    // string str = "19a4AC";
    // string str = "Aa/97";
    // string str = "Aabcd197";
    // string str = "Aa1";
    // string str = "/aA1";
    string str = " aA2";
    bool upperPresent = false;
    bool numPresent = false;
    if(isdigit(str[0])){
        cout<<0;
        return 0;
    }
    if(str.length()<4){
        cout<<0;
        return 0;
    }
    else{
        for(int i=0;i<str.length();i++){
            if(isdigit(str[i])){
                numPresent = true;
            }
            else if(isupper(str[i])){
                upperPresent = true;
            }
            else if(str[i] == ' ' || str[i]=='/'){
                cout<<0;
                return 0;
            }
        }
    }

    if(numPresent && upperPresent){
        cout<<1;
        return 0;
    }
    
    return 0;
}
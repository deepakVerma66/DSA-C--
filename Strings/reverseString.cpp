#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string name = "Deepak Verma";

    int start = 0, end = name.length()-1;
    cout<<"Original String : "<<name<<endl;
    while(start<end){
        swap(name[start++],name[end--]);
    }

    // The reverse is done using the approach of TWO POINTERS

    cout<<"Reversed String : "<<(name)<<endl;

    reverse(name.begin(),name.end());
    cout<<name;
    return 0;
}

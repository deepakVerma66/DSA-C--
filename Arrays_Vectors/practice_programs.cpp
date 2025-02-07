#include <iostream>
#include <vector>
using namespace std;

int main(){
    //Number of pairs of numbers whose sum is x;
    vector <int> v(6);
    vector <int> s;
    cout<<"Enter 6 elements of the Array:\n";
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int value;
    cout<<"Enter the number:\n";
    cin>>value;
    int count=0;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            // for(int k=j+1;k<v.size();k++){// for triplet sum
                if(v[i]+v[j]==value){
                count++;
                s.push_back(v[i]);
                s.push_back(v[j]);
            // }
            }
        }
    }
    cout<<"There are "<<count<<" pairs whose sum is "<<value<<"...!"<<endl;
    for(int i:s){
        cout<<i<<" ";
    }
    return 0;
}
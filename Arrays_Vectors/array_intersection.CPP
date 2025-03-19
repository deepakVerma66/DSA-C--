#include<iostream>
#include<vector>
using namespace std;
vector <int> Intersection(vector <int> a, vector <int> b){
    vector <int> intersectionResult;
    int i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            intersectionResult.push_back(a[i]);
            i++;
            j++;
        }
    }
    return intersectionResult;
}
int main(){
    vector <int> v1 = {1,2,3,4,5,6,7,10};
    vector <int> v2 = {2,2,3,6,7};
    vector <int> intersectionResult;
    intersectionResult = Intersection(v1,v2);
    for(auto i:intersectionResult){
        cout<<i<<" ";
    }
}
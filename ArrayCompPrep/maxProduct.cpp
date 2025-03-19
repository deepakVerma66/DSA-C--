#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> v1 = {2,3,-2,4};
    int i=0,j=v1.size()-1;
    int suf=1,pre=1;
    int maxProd=INT32_MIN;
    while(i<=v1.size()-1 && j>=0){
        pre*=v1[i++];
        suf*=v1[j--];
        maxProd = max({pre,suf,maxProd});
        if(pre==0){
            pre=1;
        }
        if(suf==0){
            suf=1;
        }
    }
    cout<<maxProd;
    return 0;
}
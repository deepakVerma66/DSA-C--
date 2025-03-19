#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v1 = {-2,1,-3,4,-1,2,1,-5,4};
    int current_max=v1[0];
    int max_ = v1[0];
    for(int i=0;i<v1.size();i++){
        current_max = max(v1[i],current_max+v1[i]);
        max_ = max(max_,current_max);
    }
    cout<<max_;
    return 0;
}
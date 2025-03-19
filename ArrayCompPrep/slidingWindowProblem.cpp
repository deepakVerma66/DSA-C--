#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v1 = {2,3,20,14,1,5,6,3,15};
    int k=3,window_sum=0,max_sum=0;
    for(int i=0;i<k;i++){
        window_sum += v1[i];
    }
    max_sum = window_sum;
    for(int j=k;j<v1.size();j++){
        window_sum += v1[j]-v1[j-k];
        max_sum = max(max_sum,window_sum);
    }
    cout<<max_sum;
    return 0;
}
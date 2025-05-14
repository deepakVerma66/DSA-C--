#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> nums = {10,11,13,1,2,3,12};
    int k=9;
    int greaterLenCount=0,lesserEqualLenCount=0;
    for(int i:nums){
        if(i>k){
            greaterLenCount++;
        }
        else{
            lesserEqualLenCount++;
        }
    }
    cout<<greaterLenCount<<endl<<lesserEqualLenCount;
    return 0;
}
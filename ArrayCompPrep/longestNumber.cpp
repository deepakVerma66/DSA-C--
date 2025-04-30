#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector <int> nums = {3,30,34,5,9};
    vector <string> strNums;
    for(int i=0;i<nums.size();i++){
        strNums.push_back(to_string(nums[i]));
    } 
    
    
    // sort(strNums.begin(),strNums.end());
    // if(strNums[0]+strNums[1]>strNums[1]+strNums[0]){
    //     cout<<strNums[0]+strNums[1];
    // }else{
    //     cout<<strNums[1]+strNums[0];
    // }
    // string longestNumber;
    // for(int i=strNums.size()-1;i>=0;i--){
    //     longestNumber.append(strNums.at(i));
    //     cout<<strNums[i]<<" ";
    // }
    // cout<<endl<<longestNumber;
    return 0;
}
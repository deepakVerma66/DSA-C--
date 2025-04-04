#include<iostream>
#include<vector>
using namespace std;

//Reversing an array

void reverse(vector <int> &nums,int start,int end){
    if(start>=end){
        // cout<<"Returning"<<endl;
        return;
    }
    // cout<<"Reversing"<<endl;
    swap(nums[start++],nums[end--]);
    reverse(nums,start,end);
}

// Checking if the string is pallindrome or not

bool pallindrome(string str,int s,int e){
    if(s<=e){
        if(str[++s]==str[--e]){
            // cout<<str[s]<<endl;
            // cout<<str[e]<<endl;
            pallindrome(str,s,e);
        }else{
            return false;
        }
    }
    return true;
}
int main()
{

    //Array Reversal
    // vector <int> nums = {1,2,3,4,5,6,7,8,9,10,11};
    // reverse(nums,0,(nums.size()-1));
    // for(int i=0;i<nums.size();i++){
    //     cout<<nums[i]<<" ";
    // }

    // Check if pallindrome or Not
    string str = "madamadam";
    int n=str.length()-1;
    bool isPallindrome = pallindrome(str,0,n);
    if(isPallindrome){
        cout<<"pallindrome";
    }
    else{
        cout<<"Not Pallindrome";
    }

    return 0;
}
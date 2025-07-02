#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
long long findMirrorDecimalNo(long long num){
    for(long i=num+1;;i++){
        string number = to_string(i);
        reverse(number.begin(),number.end());
        if(number==to_string(i)){
            // cout<<i<<endl;
            return i;
        }
    }
}

long convertToBaseK(long long num,int k){
    string base;
    long long number = num,rem=0;
    while(number>0){
        rem = number%k;
        base = base + to_string(rem);
        number/=k;
    }
    reverse(base.begin(),base.end());
    // cout<<"ConvertingToBaseK"<<endl;

    return stoll(base);
}
bool checkMirrorNumber(long baseK){
    string number = to_string(baseK);
    reverse(number.begin(),number.end());
    // cout<<"checkMirrorNumber"<<endl;
    if(number==to_string(baseK)){
        return true;
    }
    return false;
}
int main()
{
    
    int k=7,n=17;
    long long num=0;
    long baseK = -1;
    long long result = 0;
    while(n>0){
        num = findMirrorDecimalNo(num);
        // cout<<num<<endl;
        baseK = convertToBaseK(num,k);
        // cout<<baseK;
        bool flag=false;
        flag = checkMirrorNumber(baseK);
        if(flag){
            result+=num;
            n--;
        }
    }
    cout<<result;
}
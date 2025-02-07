#include <iostream>
using namespace std;
int sqrtbinSrch(int num){
    int start = 0,end = num,ans = 0;
    while(start<=end){
        int mid = start + (end-start)/2;
        if(mid*mid == num){
            return mid;
        }
        else if(mid*mid<num){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    cout<<"Square of 36 is: "<<sqrtbinSrch(48);
    
}
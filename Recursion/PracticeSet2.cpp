#include<iostream>
using namespace std;
void sumOfNumbers(int sum, int n){
    if(n==0){
        cout<<"Sum of numbers is : "<<sum;
    }
    else{
        sum+=n;
        sumOfNumbers(sum,--n);
    }
}
int sumOfNumbersParametrised(int sum, int n){
    if(n==0){
        return sum;
    }
    else{
        sum+=n;
        sumOfNumbersParametrised(sum,--n);
    }
}
int sumOfNumbersBacktracking(int n){
    if(n==0){
        return 0;
    }
    return n + sumOfNumbersBacktracking(n-1);
}
long long int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main()
{
    // int n;
    // cout<<"Enter the number: "<<endl;
    // cin>>n;
    // int sum=0;
    // sumOfNumbers(sum,n);
    // sum = sumOfNumbersParametrised(sum,n);
    // sum = sumOfNumbersBacktracking(n);
    // cout<<sum;

    // Factorial of a number
    int n;
    cout<<"Enter the number to calculate its factorial:"<<endl;
    cin>>n;

    cout<<"Fctorial of Number is : "<<factorial(n);
    return 0;
}
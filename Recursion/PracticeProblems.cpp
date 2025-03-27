#include<iostream>
using namespace std;

//Print some string(name) n times
// void printName(int count){
//     if(count==0){
//         return;
//     }
//     else
//     {   
//         cout<<"Deepak Verma "<<count<<endl;
//         // count--;
//         printName(--count);
//     }
// }
void printName(int i,int n){
    if(i>=n){
        return;
    }
    else{
        cout<<i<<" Deepak Verma"<<endl;
        printName(++i,n);
    }
}

void printNumberReverse(int count){
    if(count==0){
        return;
    }else{
        cout<<count<<endl;
        printNumberReverse(--count);
    }
}
void printNumber(int count,int start){
    if(start>count){
        return;
    }else{
        cout<<start<<endl;
        printNumber(count,++start);
    }
}

void printNumberBacktracking(int n){
    if(n==1){
        return;
    }
    else{
        printNumberBacktracking(--n);
        cout<<n<<endl;
    }
}
void printReverseNumberBacktracking(int i,int n){
    if(i>n){
        return;
    }
    else{
        printReverseNumberBacktracking(i+1,n);
        cout<<i<<endl;
    }
}
int main()
{
    int count=5;
    // printName(count);
    // printName(0,count); //Another kind of approach for doing the same process
    // printNumberReverse(count);
    // printNumber(count,1);

    // printNumberBacktracking(count);
    printReverseNumberBacktracking(1,count);

    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    // // Pattern 1
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15

    // int k=1;
    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<k++<<" ";
    //     }
    //     cout<<endl;
    // }


    


    // Pattern 3

    // ABCDE
    // ABCD
    // ABC
    // AB
    // A


    // for(int i=1;i<=5;i++){
    //     for(char ch='A';ch<='A'+5-i;ch++){
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }


    // Pattern 4
    // A
    // BB
    // CCC
    // DDDD
    // EEEEE

    // for(char ch='A';ch<'A'+5;ch++){
    //     for(char j='A';j<=ch;j++){
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }

    // Pattern 5
//      A
//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA

    // for(int i=1;i<=5;i++){
    //     for(int j=1;j<=5-i;j++){
    //         cout<<" ";
    //     }
    //     for(char k='A';k<'A'+i;k++){
    //         cout<<k;
    //     }
    //     for(char l='A'+i-2;l>='A';l--){
    //         cout<<l;
    //     }
    //     cout<<endl;
    // }


    // Pattern 6

    // E
    // DE
    // CDE
    // BCDE
    // ABCDE

    // for(int i=1;i<=5;i++){
    //     for(char ch='E'-i+1;ch<='E';ch++){
    //         cout<<ch;
    //     }
    //     cout<<endl;
    // }


    // Pattern 7
    
    // A
    // AB
    // ABC
    // ABCD
    // ABCDE
    // ABCD
    // ABC
    // AB
    // A


    // int n = 4;  // Number of rows

    // for (int i = 0; i < n; i++) {
    //     for (char ch = 'A'; ch <= 'A' + i; ch++) {
    //         cout << ch;
    //     }
    //     cout << endl;
    // }

    return 0;
}
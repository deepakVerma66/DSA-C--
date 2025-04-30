// // #include<iostream>
// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     // string s = "1C0C1C1A0B1";
// //     string s = "1C1C1C1C1C1";
// //     // string s = "1C0A1B1C1";
// //     // string s = "";
// //     // string s = "1";
// //     // string s = "0";
// //     // int n;
// //     // cout<<"Enter the string length : ";
// //     // cin>>n;
// //     // string s;
// //     // cout<<"Enter the string:"<<endl;
// //     // for(int i=0;i<n;i++){
// //     //     cin>>s[i];
// //     // }
// //     bool result;
    
// //     bool flag = false;
// //     if(s.length()==1){
// //         cout<<s;
// //         return 0;
// //     }else if(s.length()==0){
// //         cout<<-1;
// //         return 0;
// //     }
// //     else{
// //         bool flag= false;
// //         bool oprd1 = s[0];
// //         string opr;
// //         for (int i=1;i<s.length();i++){
// //             if(s[i]=='A'){
// //                 // result = result and i;
// //                 opr = "and";
// //             }
// //             else if(s[i]=='B'){
// //                 // result = result or i;
// //                 opr = "or";
// //             }
// //             else if(s[i]=='C'){
// //                 // result = !(result or i);
// //                 opr ="!(or)";
// //             }
// //             else if((i==0 || i==1) && flag == false){
// //                 // result = ;
// //                 // result = oprd1 opr str[i];
// //                 if(opr=='and'){
// //                     result = result and s[i];
// //                     // opr = "and";
// //                 }
// //                 else if(opr=='or'){
// //                     result = result or s[i];
// //                     // opr = "or";
// //                 }
// //                 else if(opr=='or'){
// //                     result = !(result or s[i]);
// //                     // opr ="!(or)";
// //                 }
// //                 flag=true;
// //             }
// //             else if((i==0 || i==1) && flag == true){
// //                 // result = ;
// //                 // result = oprd1 opr str[i];
// //                 // result = result opr str[i];
// //                 if(opr=='and'){
// //                     result = result and s[i];
// //                     // opr = "and";
// //                 }
// //                 else if(opr=='or'){
// //                     result = result or s[i];
// //                     // opr = "or";
// //                 }
// //                 else if(opr=='or'){
// //                     result = !(result or s[i]);
// //                     // opr ="!(or)";
// //                 }
// //                 // flag=true;
// //             }
            
// //         }

// //     }
// //     cout<<result;
    
// //     return 0;
// // }


#include<iostream>
#include<string>
using namespace std;
int main()
 {
    // string s = "1C0C1C1A0B1";
    //  string s = "1C1C1C1C1C1";
    // string s = "1C0A1B1C1";
    string s = "1A0";
    //  string s = "";
    //  string s = "0";
    

     bool result = s[0];
     char op;
     if(s.length()==1){
                cout<<s;
                return 0;
            }else if(s.length()==0){
                cout<<-1;
                return 0;
            }
     for(int i=1;i<s.length();i++){
        if(s[i]=='A'){
            op = s[i];
        }
        else if(s[i]=='B'){
            op = s[i];
        }
        else if(s[i]=='C'){
            op = s[i];
        }
        else{
            if(op=='A'){
                result = result and s[i];
            }
            else if(op=='B'){
                result = result or s[i];
            }else if(op=='C'){
                result = result ^ s[i];

            }
        }
     }
     cout<<result;
    
    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     int  a = 5; //101
//     int b = 3; //011
//     cout<<(a | b);
//     return 0;
// }






for(int i=1;i<s.length();i++){
    if(s[i]=='A'){
        op = s[i];
    }
    else if(s[i]=='B'){
        op = s[i];
    }
    else if(s[i]=='C'){
        op = s[i];
    }
    else{
        result = result
    }
 }
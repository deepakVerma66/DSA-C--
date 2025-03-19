// #include<iostream>
// using namespace std;
// int main(){
//     // Pattern 4 Hollow Rectangle

//     int rows,columns;
//     cout<<"Enter Rows and Columns\n";
//     cin>>rows>>columns;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<columns;j++){
//             if(i==0 || i==rows-1 || j==0 || j==columns-1){
//                 cout<<" * ";
//             }else{
//                 cout<<"   ";// Three spaces due to space after and before the star symbol
//             }
//         }
//         cout<<endl;
//     }
// }


#include<iostream>
using namespace std;

int main()
{
    int rows,columns;
    cout<<"Enter the number of rows and columns:\n";
    cin>>rows>>columns;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            if(i==0 || i==rows-1 || j==0 || j==columns-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
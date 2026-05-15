// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string s = "axxxxyyyyb", part = "xy";
//     int i = 0;
//     int n = part.size();

//     while (i <= (int)s.size() - n) {
//         if (s.substr(i, n) == part) {
//             s.erase(i, n);
//             i = max(0, i - n); 
//         }
//         else{
//             i++;
//         }
//     }
//     cout<<s;
//     return 0;
// }

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
    string str = "daabcbaabcbc", part = "abc";
    int strSize = str.size(), partSize = part.size(), j=0;
    for(int i=0;i<strSize;){
        if(str[i]==part[j]){
            int start = i;
            while(j<partSize && i<strSize && str[i]==part[j] ){
                i++;
                j++;
                // cout<<j<<endl;
            }
            if(j==partSize){
                str = str.erase(start, partSize);
                i = max(i-partSize-1,0);
                // cout<<i<<endl;
            }
            j=0;
        }
        else i++;
    }
    cout<<str;
    return 0;
}
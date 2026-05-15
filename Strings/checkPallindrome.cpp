#include<iostream>
#include<string>
#include<algorithm>
#include<locale> // <-- Add this header
#include<windows.h>
using namespace std;
int main()
{
    // Use the operating system's native character encoding settings
    // locale::global(locale("")); 
    // SetConsoleOutputCP(CP_UTF8);

    
    // string name = "Deepak :?Vérma";
    // transform(name.begin(),name.end(),name.begin(),[](unsigned char c){return ::tolower(c);});
    
    // cout << name; // Should now correctly display: deepak :?vérma


    // string s = "A man, a plan, a canal: Panama";
    string s = "///////rac/e ?car";
    // string s = " ";
    transform(s.begin(), s.end(), s.begin(),[](unsigned char c){return ::tolower(c);});

// Argument	    Role	                Example
// Input Start	Where to begin reading	str.begin()
// Input End	Where to stop reading	str.end()
// Output Start	Where to start writing	str.begin()
// Unary Op	    The logic to apply	    ::tolower

    if(s.size()==1){
        cout<<"Pallindrome";
        return 0;
    }
    int start = 0, end = s.size()-1;
    bool isPalindrome = false;
    while(start<end){
        while((!isalnum(s[start]))&&start<end){
            start++;
        }
        while((!isalnum(s[end]))&&start<end){
            end--;
        }
        if(s[start]!=s[end]){
            isPalindrome = false;
            break;
        }
        start++;
        end--;
        isPalindrome = true;
    }
      if(isPalindrome)   cout<<"String Pallindrome";
      else cout<<"String Not Pallindrome";
    
    
    return 0;
}

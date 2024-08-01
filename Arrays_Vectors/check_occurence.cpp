#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"Enter the size of the array:";
    int n;
    cin >> n;
    cout<<"Enter the Elements:";
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    const int size = 1e5 + 10;
    vector<int> count(size, 0);
    for(int i = 0; i < n; i++){
        count[a[i]]++;
    }
    cout<<"Enter the number of queries:";
    int q;
    cin>>q;
    while(q--){
        cout<<"ENter the number:";
        int x;
        cin >> x;
        cout << count[x] << endl;
    }
}
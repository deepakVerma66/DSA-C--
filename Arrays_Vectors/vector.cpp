#include<iostream>
#include<vector>
using namespace std;

int main(){

    // vector <int> v(5);
    // cout<<"Enter the five Elements of the vector:";
    // for(int i=0;i<v.size();i++){
    //     cin>>v[i];
    // }
// 1.) Program to find the occurence of an element in the vector
    // cout<<"Enter value to search:";
    // int val;
    // cin>>val;

    //Method 1
// 1.a.) Traversing from the start of the Vector
    // int occurence=-1;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==val){
    //         occurence=i;
    //     }
    // }
    // cout<<"Element found at "<<occurence<<" index";

//1.b.)Method 2 Traversing vector from the end
    // int occurence=-1,repetition=0;
    // for(int i=(v.size()-1);i>=0;i--){
    //     if(v[i]>val){
    //         ++repetition;// checking for the occurrence of elements greater then the value
    //     }
    // }
    // cout<<"Element greater then the value is "<<repetition<<" times in the vector..";
    

//2.)Counting the occurence of an element in a vector

    // int occurence=0;
    // for(int i : v){
    //     if(v[i]==val){
    //         ++occurence; 
    //     }
    // }
    // cout<<"Element found "<<occurence<<" times in the vector..";

//3.)Sorting Vector

    // for(int i=0;i<v.size();i++){
    //     for(int j=0;j<v.size();j++){
    //         if(v[j]>v[j+1]){
    //             int temp = v[j];
    //             v[j] = v[j+1];
    //             v[j+1] = temp;
    //         }
    //     }
    // }

    // cout<<"The Sorted array is:\n";
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }


//4.)Check if the array is sorted or not
    // bool is_Sorted = true;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]>=v[i+1]){
    //         is_Sorted = false;
    //     }
    // }
    // if(is_Sorted){
    //     cout<<"Vector is sorted....";
    // }
    // else{
    //     cout<<"Vector is not sorted....";
    // }

//5.) difference between sum of elements at even position to the sum of element at odd position

    // int sum_even=0,sum_odd=0;

    // for(int i=0;i<v.size();i++){
    //     if(i%2==0){
    //         sum_even+=v[i];
    //     }
    //     else{
    //         sum_odd+=v[i];
    //     }
    // }
    // cout<<"Sum of elements at even position is: "<<sum_even<<endl;
    // cout<<"Sum of elements at odd position is: "<<sum_odd<<endl;
    // cout<<"The difference between sum of elements at even position to the sum of element at odd position is "<<sum_even-sum_odd<<"...!";


    vector<int> v1={1,2,3};
    v1.push_back(25);
    v1.insert(v1.begin()+1,355);
    for(int i=0;i<(v1.size());i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}
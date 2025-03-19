#include <iostream>
#include <vector>
#include<map>
using namespace std;
int main()
{
    // // Working with pairs
    // pair<int, int> p = {2, 4};
    // cout << p.second << endl; // This pair is initialised with two int values/elements

    // pair<string, int> p2 = {"Deepak Verma", 21};
    // cout << p2.first << " " << p2.second << endl; // This pair is initialised with one string and one int value/element
 
    // // This is a well use of pairs i.e it is taking input for any number of pairs

    // int n;
    // cout << "Enter the size of the pair: ";
    // cin >> n;

    // vector<pair<string, int>> marks(n); 
    // // pair<string, int> marks(n)  It will not work as this will take only one input however it will not take even one as this s syntctically not right
    // // And the pair is good option as it will initialise a vector with default values as n-times empty string and an integer
    // cout << "Enter marks of subjects:" << endl;
    // for(int i=0;i<n;i++){
    //     cin>>marks[i].first>>marks[i].second;
    // }
    // // Ypu can see that the pair is intially emty by commenting the input loop
    // cout << "The enterd pair is:" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << marks[i].first << " :-> " << marks[i].second << endl;
    // }


    // Stacks
    // Lists -> similar to vectors however a single linked list ios maintained for list while a doubly linked list is maintained for vectors. inserting any element in list is way more cheaper then doing the same in a vector.
    // list.push_front() //-> Inserts element at the beginning of the list
    // And many more


    // Then comes queue where in the elements behave like on first in First out(FIFO) principle
    // queue.push-> for inserting elements in the queue
    // queue.pop will pop the first element 
    // queue.front and queue.back are another methods for accessing the first and last elements of the queue respectively

    // Priority queue -> Similar to queues except it maintains the queue on the basis of the size of the elements
    // ! It forms Max Heap tree
    // priority_queue<d_t>pq;
    // pq.push() O(log n)
    // pq.emplace() O(1)
    // pq.pop() O(log n) -> wil give the largest element

    // Syntax to declare the min Heap tree
    // priority_queue<int,vector<int>,greater<int>> pq; \\Stores the minimum element at the top


    // set in cpp
    // set<int> s; -> Stores the unique elements and in sorted fashion
    // A tree is maintained while working with sets
    // Everything happpens with a Time complexity of O(log n)


    // Multisets
    // Similar to sets except it can store similar values {1,1,2,4,5,6,6,8,9}
    // multiset<int>ms;
    // ms.insert()
    // ms.count(1)-> gives the count of the number of occurences otherwise 0 if not present
    // ms.erase(ms.find(1))-> Erases only single occurence of the element 
    // ms.erase(1)-> Erases all occurence of 1 from the multiset


    // Unordered_set<int>us; -> onordered elements rather unique
    // Every function same 


    // !Important

    // Maps -> Stores unique in sorted order same like sets
    map<int,int> mp1;
    map<pair<int,int>,int> mp2;

    mp1[1]=2;
    mp1[2]=3;
    mp1.insert({5,6});
    // mp2.emplace({2,3},9);
    mp1.emplace(3,3);
    mp1.emplace(3,3);//This entry is not shown in the map since it stores only unique keys
    for(auto i:mp1){
        cout<<i.first<<":"<<i.second<<endl;
    }
    cout<<mp1[5]<<endl;

    auto it = mp1.find(3);
    // cout<<it;
    cout<<it->second<<endl;
    return 0;
}
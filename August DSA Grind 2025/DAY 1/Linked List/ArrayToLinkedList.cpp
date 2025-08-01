#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node*next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp; 
    }
    return head;
}
int lengthOfLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
int checkIfPresent(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}
int main()
{
    vector<int> arr = {1,2,3,12,13,11,1112,1113,1111};
    Node* head = convertArr2LL(arr);
    // cout<<head->data;
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    cout<<"Length of Linked List : "<<lengthOfLL(head)<<endl;

    cout<<"Enter a number to check if present in list or not : "<<endl;
    int val;
    cin>>val;
    if(checkIfPresent(head,val)){
        cout<<val<<" is present in the linked list"<<endl;
    }
    else{
        cout<<val<<" not present in the linked list "<<endl;
    }

    return 0;
}
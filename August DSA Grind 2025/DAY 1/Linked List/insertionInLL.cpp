#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArray2LL(vector<int> &nums){
    if(nums.empty()) return nullptr;
    Node* head = new Node(nums[0]);
    Node* mover = head;
    for(int i=1; i<nums.size(); i++){
         Node* temp = new Node(nums[i]);
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

void printLL(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node* insertAtHead(Node* head, int el){
    Node* temp = new Node(el);
    temp->next = head;
    head = temp;
    return head;
}
Node* insertAtTail(Node* head, int el){
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    Node* remTail = temp->next;
    temp->next = nullptr;
    delete remTail;
    return head;
}
// Node* insertAtKthPosition(Node* head, int el, int k){
//     if(head)
// }

int main(){
    vector<int> nums = {1,2,3,4,5,6};
    Node* head = convertArray2LL(nums);
    cout<<"Original Linked List -> "<<endl;
    printLL(head);
    int ele = 10;
    int k = 1;
    int n = lengthOfLL(head);
    // cout<<n;
    // head = insertAtHead(head,ele);
    // head = insertAtTail(head,ele);
    // head = insertAtKthPosition(head,ele,k,n);
    cout<<endl<<"Updated Linked List : "<<endl;
    printLL(head);
    return 0;
}
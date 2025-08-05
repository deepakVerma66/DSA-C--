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
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* newNode =new Node(el);;
    temp->next = newNode;;
    // delete remTail;
    return head;
}
Node* insertAtKthPosition(Node* head, int el, int k, int n){
    Node* newNode = new Node(el);
    if(k == 1){
        // head = newNode;
        newNode->next = head;
        head = newNode;
        return head;
    }
    if(k>n){
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }    
        temp->next = newNode;
        return head;
    }
    else{
        Node* temp = head;
        int cnt = 1;
        while(cnt<k-1){
            temp = temp->next;
            cnt++;
        }
        Node* nextNode = temp->next;
        temp->next = newNode;
        newNode->next = nextNode;
        return head;
    }
}
Node* insertAfterTheValue(Node* head, int node, int val){
    Node* temp = head;
    while(temp->data != node){
        temp = temp->next;
        // cout<<temp->data<<endl;
    }
    Node* newNode = new Node(val);
    Node* nextNode = temp->next;
    temp->next = newNode;
    newNode->next = nextNode;
    // cout<<nextNode->data;
    return head;
}

int main(){
    vector<int> nums = {10,15,20,30,35};
    Node* head = convertArray2LL(nums);
    cout<<"Original Linked List -> "<<endl;
    printLL(head);
    int ele = 25;
    int value = 25;
    int k = 3;
    int n = lengthOfLL(head);
    // cout<<n;
    // head = insertAtHead(head,ele);
    // head = insertAtTail(head,ele);
    // head = insertAtKthPosition(head,ele,value,n);
    // head = insertAtKthPosition(head,ele,k,n);
    head = insertAfterTheValue(head,20,value);
    cout<<endl<<"Updated Linked List : "<<endl;
    printLL(head);
    return 0;
}
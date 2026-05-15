#include<iostream>
#include<vector>
using namespace std;
class Node{
    
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArray2LL(vector<int> &nums){
    Node* head = new Node(nums[0]);
    Node* mover = head;
    for(int i=1;i<nums.size();i++){
         Node* temp = new Node(nums[i]);
         mover->next = temp;
         mover = temp;
    }
    return head;
}

int countNodes(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        count++;
    }
    return count;
}
void printLL(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
Node* removeHead(Node* head){
    if(head==NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node* removeTail(Node* head){
    if(head==NULL) return head;
    if(head->next==NULL){
        delete head; 
        return nullptr;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* deleteKthNode(Node* head, int n, int k){
    if(k>n || k<1){
        cout<<"Node Doesn't exist..."<<"Enter a valid number..";
        return head;
    }
    if(k==1){
        head = removeHead(head);
        return head;
    }
    else if(k==n){
        head = removeTail(head);
        return head;
    }
    else{
        int iter = 2;
        Node* temp = head->next;   // Can also do this by maintaining a prev pointer which points previous to the temp node and then updating the pointer like prev->next = prev->next->next; abd then deleting the temp node
        while(iter<k-1){
            temp = temp->next;
            iter++;
        }
        Node* remNode = temp->next;
        temp->next = remNode->next;
        delete remNode;
    }
    return head;
}
Node* deleteElementInLL(Node* head,int n, int el){
    if(head == NULL) return head;
    if(head->data == el){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;
    while(temp){
        if(temp->data == el){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> nums = {12,55,64,78,45,11};
    Node* head = convertArray2LL(nums);
    int k=3;
    // printLL(head);
    // head = removeHead(head);
    // printLL(head);
    // head = removeTail(head);
    // printLL(head);
    int n = countNodes(head);
    // cout<<n;
    cout<<"Original Linked List : "<<endl;
    printLL(head);
    // head = deleteKthNode(head,n,k);
    // cout<<"After Removing Node at "<<k<<" position"<<endl;
    // printLL(head);
    head = deleteElementInLL(head,n,10);
    printLL(head);
    // cout<<head->next->next->data;
    return 0;
}
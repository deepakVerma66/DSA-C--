#include<iostream>
#include<vector>
using namespace std;

class ListNode{
public:
    int val;
    ListNode* next;
    ListNode* back;

    ListNode(int data1, ListNode* next1, ListNode* back1){
        val = data1;
        next = next1;
        back = back1;
    }

    ListNode(int data1){
        val = data1;
        next = nullptr;
        back = nullptr;
    }
};

ListNode* convertArray2DLL(vector<int> &nums){
    if(nums.empty()) return nullptr;
    ListNode* head = new ListNode(nums[0]);
    ListNode* prev = head;
    for(int i=1; i<nums.size(); i++){
        ListNode* temp = new ListNode(nums[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

ListNode* insertAtHead(ListNode* head, int nodeVal){
    ListNode* newNode = new ListNode(nodeVal);
    newNode->next = head;
    head->back = newNode;
    head = newNode;
    return head;
}

ListNode* insertAtTail(ListNode* head, int nodeVal){
    ListNode* newNode = new ListNode(nodeVal);
    ListNode* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    // temp = temp->next;
    temp->next = newNode;
    newNode->back = temp;
    return head;
}

ListNode* insertInSortedList(ListNode* head, int nodeVal){
    ListNode* newNode = new ListNode(nodeVal);
    if(head->val > nodeVal){
        newNode->next = head;
        head->back = newNode;
        head = newNode;
        return head;
    }
    ListNode* temp = head;
    ListNode* prev;
    while(temp->val < nodeVal){
        prev = temp;
        temp = temp->next;
    }
    prev->next = newNode;
    newNode->next = temp;
    temp->back = newNode;
    newNode->back = prev;
    return head;
}

void printDLL(ListNode* head){
    ListNode* temp = head;
    while(temp){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    vector<int> nums = {1,2,3,5,6};
    ListNode* head = convertArray2DLL(nums);
    printDLL(head);
    head = insertAtHead(head,1);
    printDLL(head);
    head = insertAtTail(head,7);
    printDLL(head);
    head = insertInSortedList(head,4);
    printDLL(head);
    return 0;
}
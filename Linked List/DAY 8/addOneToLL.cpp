#include<iostream>
#include<vector>
using namespace std;

class ListNode{
public:
    int val;
    ListNode* next;

    ListNode(int data1, ListNode* next1){
        val = data1;
        next = next1;
    }

    ListNode(int data1){
        val = data1;
        next = nullptr;
    }
};

ListNode* convertArray2LL(vector<int> &nums){
    if(nums.empty()) return nullptr;
    ListNode* head = new ListNode(nums[0]);
    ListNode* mover = head;
    for(int i=1; i<nums.size(); i++){
         ListNode* temp = new ListNode(nums[i]);
         mover->next = temp;
         mover = temp;
    }
    return head;
}

void printLL(ListNode* head){
    ListNode* temp = head;
    while(temp){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout<<endl;
}

ListNode* reverseList(ListNode* curr){
    if(!curr || !curr->next) return curr;
    ListNode* prev = nullptr;
    while(curr){
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

ListNode* addOneToList(ListNode* head){
    if(!head) return new ListNode(1);

    head = reverseList(head);
    ListNode* temp = head;
    int carry = 1;
    while(temp && carry){
        int sum = temp->val+carry;
        temp->val = sum % 10;
        carry = sum/10;
        if(!temp->next && carry){
            temp->next = new ListNode(carry);
            carry = 0;
        }
        temp = temp->next;
    }
    head = reverseList(head);
    return head;
}
int addList(ListNode* temp){
    if(temp == nullptr){
        return 1;
    }
    int carry = addList(temp->next);
    temp -> val = temp -> val + 1;
    if(temp -> val < 10){
        return 0;
    }
    temp -> val = 0;
    return 1;  
}
ListNode* addUsingRecur(ListNode* head){
    ListNode* temp = head;
    int carry = addList(temp);
    if(carry == 1){
        ListNode* newNode = new ListNode(1);
        newNode -> next = head;
        return newNode;
    }
    return head;
}

int main(){
    vector<int> nums = {9,9,8};
    ListNode* head = convertArray2LL(nums);
    printLL(head);
    // head = reverseList(head);
    // printLL(head);
    head = addOneToList(head);
    // head = reverseList(head);
    printLL(head);
    head = addUsingRecur(head);
    printLL(head);
    return 0;
}
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

ListNode* deleteMiddleNode(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* prev = nullptr;
    while(fast != nullptr && fast -> next != nullptr){
        fast = fast -> next -> next;
        prev = slow;
        slow = slow -> next;
    }    
    prev -> next = slow->next;
    return head;
}

int main(){
    vector<int> nums = {1,2,3,4};
    ListNode* head = convertArray2LL(nums);
    printLL(head);
    head = deleteMiddleNode(head);
    printLL(head);
    return 0;
}
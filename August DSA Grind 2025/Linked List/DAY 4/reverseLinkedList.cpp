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

ListNode* reverseList(ListNode* head){
    ListNode* temp = head;
    ListNode* revHead = nullptr;
    while(temp){
        ListNode* revNode = new ListNode(temp->val);
        revNode->next = revHead;
        revHead = revNode;
        temp = temp->next;
    }
    return revHead;
}

int main(){
    vector<int> nums = {1,2,3,4,5,8,10};
    ListNode* head = convertArray2LL(nums);
    printLL(head);
    ListNode* revHead = reverseList(head);
    printLL(revHead);
    return 0;
}
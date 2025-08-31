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
    if(!head || !head->next) return head;
    // // ListNode* prev = head;
    // ListNode* temp = head->next;
    // ListNode* front = temp->next;
    // prev->next = nullptr;
    // while(front){
    //     temp->next = prev;
    //     prev = temp;
    //     temp = front;
    //     front = front->next;
    // }
    // temp->next = prev;
    // return temp;

    ListNode* prev = nullptr;
    ListNode* curr = head;

    while (curr) {
        ListNode* nextNode = curr->next;  
        curr->next = prev;                
        prev = curr;                      
        curr = nextNode;                  
    }
    return prev;
}

ListNode* reverseListRecur(ListNode* head){
    if(head == nullptr || head->next == nullptr){
        return head;
    }
    ListNode* newHead = reverseListRecur(head->next);
    ListNode* front = head->next;
    front->next = head;
    head->next = nullptr;
    return newHead;
}

int main(){
    vector<int> nums = {1,2,3};
    ListNode* head = convertArray2LL(nums);
    printLL(head);
    head = reverseList(head);
    printLL(head);
    head = reverseListRecur(head);
    printLL(head);
    return 0;
}
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

ListNode* groupOddEvenNodes(ListNode* head){
    ListNode* oddNode = head;
    ListNode* evenNode = head->next;
    ListNode* evenHead = evenNode;
    while(evenNode != nullptr && evenNode->next != nullptr){
        oddNode->next = oddNode->next->next;
        evenNode->next = evenNode->next->next;
        oddNode = oddNode->next;
        evenNode = evenNode->next;
    }
    oddNode->next = evenHead;
    
    return head;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6};
    ListNode* head = convertArray2LL(nums);
    printLL(head);
    head = groupOddEvenNodes(head);
    printLL(head);
    return 0;
}
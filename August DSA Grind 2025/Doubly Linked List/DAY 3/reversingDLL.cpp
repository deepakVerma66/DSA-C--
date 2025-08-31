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

void printDLL(ListNode* head){
    ListNode* temp = head;
    while(temp){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

ListNode* reverseList(ListNode* head, int n){
    int i=0;
    ListNode* left = head;
    ListNode* right = left;
    while(right->next){
        right = right->next;
    }
    while(i<n/2){
        swap((left->val), (right->val));
        // cout<<left->val<<" ";
        left = left->next;
        right = right->back;
        i++;
    }
    return head;
}

ListNode* reverseSinglePass(ListNode* head){
    ListNode* current = head;
    ListNode* last = nullptr;
    while(current){
        last = current->back;
        current->back = current->next;
        current->next = last;

        current = current->back;
    }
    return last->back;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6};
    int n = nums.size();
    ListNode* head = convertArray2DLL(nums);
    printDLL(head);
    head = reverseList(head,n);
    printDLL(head);
    head = reverseSinglePass(head);
    printDLL(head);
    return 0;
}
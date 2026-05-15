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
bool isPallindrome(ListNode* head){
    ListNode* newHead = nullptr;
    ListNode* temp = head;
    while(temp){
        ListNode* newNode = new ListNode(temp->val);
        newNode->next = newHead;
        newHead = newNode;
        temp = temp->next;        
    }

    ListNode* temp1 = head;
    ListNode* temp2 = newHead;
    while(temp1){
        if(temp1->val != temp2->val){
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return true;
}

ListNode* reverse(ListNode* curr){
    ListNode* prev = nullptr;
    // ListNode* temp = curr;
    while(curr){
        ListNode* newNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = newNode;
    }
    return prev;
}

bool isPallindrome2(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast->next != nullptr && fast->next->next != nullptr){
        fast = fast->next->next;
        slow = slow->next;
    }
    ListNode* newHead = reverse(slow->next);
    ListNode* first = head;
    ListNode* second = newHead;
    while(second){
        if(first->val != second->val){
            reverse(newHead);
            return false;
        }
        first = first->next;
        second = second->next;
    }
    reverse(newHead);
    return true;
}

int main(){
    vector<int> nums = {1,2,3,2,1};
    ListNode* head = convertArray2LL(nums);
    printLL(head);
    // bool flag = isPallindrome(head);
    // if(flag)cout<<"Pallindrome";
    // else cout<<"Not Pallindrome";

    bool flag = isPallindrome2(head);
    if (flag) cout<<"Pallindrome";
    else cout<<"Not Pallindrome";
    return 0;
}
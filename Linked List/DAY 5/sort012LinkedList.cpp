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

ListNode* sort012Nodes(ListNode* head){
    ListNode* zeroHead = new ListNode(-1);
    ListNode* oneHead = new ListNode(-1);
    ListNode* twoHead = new ListNode(-1);
    ListNode* zero = zeroHead;
    ListNode* one = oneHead;
    ListNode* two = twoHead;

    ListNode* temp = head;
    while(temp){
        if(temp->val == 0){
            zero->next = temp;
            zero = zero->next;
        }
        else if(temp->val == 1){
            one->next = temp;
            one = one->next;
        }
        else{
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }

    zero->next = (oneHead->next) ? oneHead->next : twoHead->next;
    one->next = twoHead->next;
    two->next = nullptr;

    ListNode* newHead = zeroHead->next;
    delete zeroHead, oneHead, twoHead;
    return newHead;
    
}

int main(){
    // vector<int> nums = {0,1,2,0,1,2,0,1,2,0,1,2};
    // vector<int> nums = {0,1,0,0,0,0,1};
    vector<int> nums = {0,2,0,2,0,2,0};
    ListNode* head = convertArray2LL(nums);
    printLL(head);
    head = sort012Nodes(head);
    printLL(head);
    return 0;
}
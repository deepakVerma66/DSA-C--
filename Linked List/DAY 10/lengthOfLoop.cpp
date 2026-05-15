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
int lengthOfLoop(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    bool loop = false;
    while(fast != nullptr && fast->next != nullptr){
        fast = fast -> next -> next;
        slow = slow -> next;
        if(fast == slow){
            loop = true;
            break;
        }
    }
    if(!loop){
        return 0;
    }
    else{
        int len = 1;
        slow = slow->next;
        while(slow != fast){
            len++;
            slow = slow->next;
        }
        return len;
    }
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    ListNode* head = convertArray2LL(nums);
    int i=0;
    ListNode* temp = head;
    while(i!=4){
        temp = temp->next;
        i++;
    }
    ListNode* tail = head;
    while(tail->next != nullptr){
        tail = tail->next;
    }
    tail->next = temp;
    int length = lengthOfLoop(head);
    cout<<length;
    // printLL(head);
    return 0;
}
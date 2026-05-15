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

ListNode* removeKey(ListNode* head, int key){
    ListNode* temp = head;
    ListNode* prev = nullptr;
    while(temp){
        if(temp->val != key){
            prev = temp;
            temp = temp -> next;
        }
        else{
            if(temp == head){
                head = head -> next;
                delete temp;
                temp = head;
            }
            else{
                prev -> next = temp -> next;
                delete temp;
                temp = prev -> next;
            }
        }
    }
    return head;

}

int main(){
    // vector<int> nums = {9,1,2,3,9,4,5,9,6,9};
    vector<int> nums = {9,9,9,9,9};
    // vector<int> nums = {9,1,2,3};

    ListNode* head = convertArray2LL(nums);
    printLL(head);
    head = removeKey(head,9);
    printLL(head);
    return 0;
}
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

ListNode* splitOddEven(ListNode* head){
    if(!head) return head;
    ListNode* oddHead = new ListNode(-1);
    ListNode* oddNode = oddHead;
    ListNode* evenHead = new ListNode(-1);
    ListNode* evenNode = evenHead;
    ListNode* temp = head;
    int i=1;
    while(temp){
        if(i % 2 == 0){
            evenNode -> next = temp;
            evenNode = evenNode -> next;
        }
        else{
            oddNode -> next = temp;
            oddNode = oddNode -> next;
        }
        temp = temp -> next;
        i++;
    }
    if(oddHead != oddNode){
        oddNode -> next = evenHead -> next;
        evenNode -> next = nullptr;
        delete evenHead;
    }
    else{
       return oddHead -> next;
    }
    // delete evenHead;
    return oddHead -> next;
}

int main(){
    // vector<int> nums = {1,2,3,4,5,6};
    vector<int> nums = {12,3,46,8,45,33,56};
    ListNode* head = convertArray2LL(nums);
    printLL(head);
    head = splitOddEven(head);
    printLL(head);
    return 0;
}
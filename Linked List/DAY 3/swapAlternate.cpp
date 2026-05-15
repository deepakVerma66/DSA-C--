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
        // cout<<"hello";
    }
    cout<<endl;
}

int countNodes(ListNode* head){
    int count = 0;
    ListNode* temp = head;
    while(temp){
        temp = temp->next;
        count++;
    }
    return count;
}

ListNode* swapAlternate(ListNode* head,int n){
    ListNode* temp = head;
    int i=0;
    while(i<n-1){
        int value = temp->next->val;
        temp->next->val = temp->val;
        temp->val = value;
        temp = temp->next->next;
        i+=2;
    }
    return head;
}

int main(){
    vector<int> nums = {2,5,3,4,6,2,2};
    ListNode* head = convertArray2LL(nums);
    printLL(head);
    int n = countNodes(head);
    // cout<<n;
    head = swapAlternate(head,n);
    printLL(head);
    return 0;
}
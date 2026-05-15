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
}
int length(ListNode* head) {
    int count = 0;
    while (head) {
        head = head->next;
        count++;
    }
    return count;
}
ListNode* removeNthNodeFromEnd(ListNode* head, int n, int size){
    int iter = 1;
    ListNode* temp = head;
    while(iter<size-n+1-1){
        temp = temp->next;
        iter++;
    }
    ListNode* remNode = temp->next;
    temp->next = remNode->next;
    delete remNode;
    return head;
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    int n = 2;
    ListNode* head = convertArray2LL(nums);
    int size = length(head);
    cout<<size;
    // cout<<"Original Linked List.."<<endl;
    // printLL(head);
    // cout<<endl;
    // cout<<"Updated Linked List.."<<endl;
    // head = removeNthNodeFromEnd(head,n,size);
    // printLL(head);
    return 0;
}
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
        ListNode* temp = new ListNode(nums[i],nullptr,prev);
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
    cout<<endl;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6};
    ListNode* head = convertArray2DLL(nums);
    printDLL(head);
    return 0;
}
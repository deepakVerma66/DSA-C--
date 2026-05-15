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
int countNodes(ListNode* head){
    int count = 0;
    ListNode* temp = head;
    while(temp){
        temp = temp->next;
        count++;
    }
    return count;
}
ListNode* rotateListKTimes(ListNode* head,int k,int size){
    if(size<=1) return head;
    ListNode* temp = head;
    int iter = 1;
    int currValue = temp->val;
    int nextValue;
    while(iter<=k%size){
        temp = head;
        while(temp->next){
            nextValue = temp->next->val;
            temp->next->val = currValue;
            currValue = nextValue;
            temp = temp->next;
        }
        head->val = nextValue;
        iter++;
    }
    return head;
}

int main(){
    vector<int> nums = {3,5,2,1};
    ListNode* head = convertArray2LL(nums);
    int n = countNodes(head) ,k=10;
    printLL(head);
    head = rotateListKTimes(head,k,n);
    printLL(head);
    return 0;
}
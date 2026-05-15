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
ListNode* removeKey(ListNode* head, int key){
    ListNode* temp  = head;
    ListNode* prevNode = nullptr;
    ListNode* nextNode = nullptr;
    // while(temp -> next != nullptr){
    //     if(temp -> val == key && temp == head){
    //         head = head -> next;
    //     }
    //     else if(temp->val != key){
    //         temp -> back = prev;
    //         if(prev != nullptr){
    //             prev -> next = temp;
    //         }
    //         prev = temp;
    //     }
    //     temp = temp-> next;
    // }
    // // temp = temp -> next;
    // if(temp -> val == key){
    //     temp -> back -> next   = nullptr;
    //     temp -> back = nullptr;
    // }
    while(temp!=nullptr){
        if(temp->val == key){
            if(temp == head){
                head = head -> next;
            }
            nextNode = temp -> next;
            prevNode = temp -> back;
            if(nextNode) nextNode -> back = prevNode;
            if(prevNode) prevNode -> next = nextNode;
            delete temp;
            temp = nextNode;
        }
        else{
            temp = temp -> next;
        }
    }
    return head;
}

int main(){
    // vector<int> nums = {10,4,10,2,3,10,10,5,10};
    vector<int> nums = {10,10,10,10,10};
    ListNode* head = convertArray2DLL(nums);
    printDLL(head);
    head = removeKey(head, 10);
    printDLL(head);
    return 0;
}
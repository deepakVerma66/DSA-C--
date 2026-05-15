// #include<iostream>
// #include<vector>
// using namespace std;

// class ListNode{
// public:
//     int val;
//     ListNode* next;

//     ListNode(int data1, ListNode* next1){
//         val = data1;
//         next = next1;
//     }

//     ListNode(int data1){
//         val = data1;
//         next = nullptr;
//     }
// };

// ListNode* convertArray2LL(vector<int> &nums){
//     if(nums.empty()) return nullptr;
//     ListNode* head = new ListNode(nums[0]);
//     ListNode* mover = head;
//     for(int i=1; i<nums.size(); i++){
//          ListNode* temp = new ListNode(nums[i]);
//          mover->next = temp;
//          mover = temp;
//     }
//     return head;
// }

// ListNode* mergeLinkedLists(ListNode* l1, ListNode* l2){
//     ListNode* head = l1;
//     ListNode* mover = nullptr;
//     if (!l1) mover = l2;
//     else if (!l2) mover = l1;
//     else mover = (l1->val < l2->val) ? l1 : l2;
//     ListNode* temp1 = l1;
//     ListNode* temp2 = l2;
//     while(temp1 && temp2){
//         if(temp1->val < temp2->val){
//             mover->next = temp1;
//             temp1 = temp1->next;
//             mover = mover->next;
//         }
//         else if(temp1->val > temp2->val){
//             mover->next = temp2;
//             temp2 = temp2->next;
//             mover = mover->next;
//         }
//         else if(temp1->val == temp2->val){
//             mover->next = temp1;
//             mover = mover->next;
//             mover->next = temp2;
//             temp1 = temp1->next;
//             temp2 = temp2->next;
//             // mover = mover->next;
//         }
//     }
//     while(temp1){
//         mover->next = temp1;
//         mover = mover->next;
//         temp1 = temp1->next;
//     }
//     while(temp2){
//         mover->next = temp2;
//         mover = mover->next;
//         temp2 = temp2->next;
//     }
//     return head;

// }

// void printLL(ListNode* head){
//     ListNode* temp = head;
//     while(temp){
//         cout << temp->val << " ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// int main(){
//     vector<int> nums1 = {1,2,4};
//     vector<int> nums2 = {1,3,4};
//     ListNode* head1 = convertArray2LL(nums1);
//     ListNode* head2 = convertArray2LL(nums2);

//     printLL(head1);
//     printLL(head2);
//     ListNode* head = mergeLinkedLists(head1,head2);
//     printLL(head);
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int data1, ListNode* next1) {
        val = data1;
        next = next1;
    }

    ListNode(int data1) {
        val = data1;
        next = nullptr;
    }
};

ListNode* convertArray2LL(vector<int> &nums) {
    if (nums.empty()) return nullptr;
    ListNode* head = new ListNode(nums[0]);
    ListNode* mover = head;
    for (int i = 1; i < nums.size(); i++) {
        mover->next = new ListNode(nums[i]);
        mover = mover->next;
    }
    return head;
}

ListNode* mergeLinkedLists(ListNode* l1, ListNode* l2) {
    if (!l1) return l2;
    if (!l2) return l1;
    ListNode* head = (l1->val < l2->val) ? l1 : l2;
    ListNode* mover = nullptr;

    if (l1->val < l2->val) {
        mover = l1;
        l1 = l1->next;
    } else {
        mover = l2;
        l2 = l2->next;
    }
    while (l1 && l2) {
        if (l1->val < l2->val) {
            mover->next = l1;
            l1 = l1->next;
        } else {
            mover->next = l2;
            l2 = l2->next;
        }
        mover = mover->next;
    }
    if (l1) mover->next = l1;
    if (l2) mover->next = l2;

    return head;
}

void printLL(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    vector<int> nums1 = {1, 2, 4};
    vector<int> nums2 = {1, 3, 4};

    ListNode* head1 = convertArray2LL(nums1);
    ListNode* head2 = convertArray2LL(nums2);

    printLL(head1);
    printLL(head2);

    ListNode* merged = mergeLinkedLists(head1, head2);
    printLL(merged);

    return 0;
}

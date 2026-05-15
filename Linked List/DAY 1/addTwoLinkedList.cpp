// #include <iostream>
// #include <vector>
// using namespace std;

// class ListNode
// {
// public:
//     int val;
//     ListNode *next;

//     ListNode(int data1, ListNode *next1)
//     {
//         val = data1;
//         next = next1;
//     }

//     ListNode(int data1)
//     {
//         val = data1;
//         next = nullptr;
//     }
// };

// ListNode *convertArray2LL(vector<int> &nums)
// {
//     if (nums.empty())
//         return nullptr;
//     ListNode *l1 = new ListNode(nums[0]);
//     ListNode *mover = l1;
//     for (int i = 1; i < nums.size(); i++)
//     {
//         ListNode *temp = new ListNode(nums[i]);
//         mover->next = temp;
//         mover = temp;
//     }
//     return l1;
// }

// void printLL(ListNode *l1)
// {
//     ListNode *temp = l1;
//     // cout<<"Printing List";
//     while (temp)
//     {
//         cout << temp->val << " ";
//         temp = temp->next;
//         // cout<<"Hello";
//     }
//     cout<<endl;
// }
// ListNode* addListNodes(ListNode* l1, ListNode* l2)
// {
//     ListNode* temp1 = l1;
//     ListNode* temp2 = l2;
//     ListNode* carry = new ListNode(0);
//     while (temp1 != nullptr && temp2 != nullptr)
//     {
//         int sum = temp1->val + temp2->val + carry->val;
//         carry->val = sum / 10;
//         temp1->val = sum % 10;
//         temp1 = temp1->next;
//         temp2 = temp2->next;
//     }
//     while (temp1)
//     {
//         int sum = temp1->val + carry->val;
//         temp1->val = sum % 10;
//         carry->val = sum / 10;
//         temp1 = temp1->next;
//     }
//     while (temp2)
//     {
//         int sum = temp2->val + carry->val;
//         temp1->val = sum % 10;
//         carry->val = sum / 10;
//         temp1 = temp1->next;
//         temp2 = temp2->next;
//     }
//     if (carry->val == 1 && temp1->next == nullptr)
//     {
//         temp1->next = carry;
//     }
//     return l1;
// }

// int main()
// {
//     vector<int> nums1 = {9,9,9,9,9,9,9};
//     vector<int> nums2 = {9,9,9,9};
//     ListNode* l1 = convertArray2LL(nums1);
//     ListNode* l2 = convertArray2LL(nums2);
//     printLL(l1);
//     printLL(l2);
//     l1 = addListNodes(l1, l2);
//     printLL(l1);
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }

    ListNode(int data1)
    {
        val = data1;
        next = nullptr;
    }
};

ListNode *convertArray2LL(vector<int> &nums)
{
    if (nums.empty()) return nullptr;
    ListNode *l1 = new ListNode(nums[0]);
    ListNode *mover = l1;
    for (int i = 1; i < nums.size(); i++)
    {
        ListNode *temp = new ListNode(nums[i]);
        mover->next = temp;
        mover = temp;
    }
    return l1;
}

void printLL(ListNode *l1)
{
    ListNode *temp = l1;
    // cout<<"Printing List";
    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
        // cout<<"Hello";
    }
    cout << endl;
}

ListNode *addListNodes(ListNode *l1, ListNode *l2)
{
    if (!l1) return l2; 
    if (!l2) return l1; 

    ListNode *head = l1; 
    ListNode *temp1 = l1;
    ListNode *temp2 = l2;

    int carry = 0; 
    while (temp1 && temp2)
    {
        int sum = temp1->val + temp2->val + carry;
        temp1->val = sum % 10;
        carry = sum / 10;
        if (!temp1->next && temp2->next)
        {
            temp1->next = new ListNode(0);
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    while (temp1)
    {
        int sum = temp1->val + carry;
        temp1->val = sum % 10;
        carry = sum / 10;
        if (!temp1->next && carry > 0)
        {
            temp1->next = new ListNode(0);
        }
        temp1 = temp1->next;
    }

    return head;
}

int main()
{
    vector<int> nums1 = {9, 9, 9, 9, 9, 9, 9};
    vector<int> nums2 = {9, 9, 9, 9};
    ListNode *l1 = convertArray2LL(nums1);
    ListNode *l2 = convertArray2LL(nums2);
    printLL(l1);
    printLL(l2);
    l1 = addListNodes(l1, l2);
    printLL(l1);
    return 0;
}

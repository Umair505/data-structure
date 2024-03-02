class Solution {
public:
    ListNode* middleNode(ListNode* head) {
       ListNode* fast = head;
       ListNode* slow = head;
       while(fast!= NULL && fast->next != NULL)
       {
           slow = slow->next;
           fast = fast->next->next;
       }
       cout<<"My "<<slow->val<<endl;
       return slow;
    }
};
/*
LINK->https://leetcode.com/problems/middle-of-the-linked-list/description/
if we want middle 1st val for even number case like:1 2 3 4 5 6 we want number 3 then this things have to do
ListNode* fast = head->next;
ListNode* slow = head;

if want both of the middle val for even case then we have to do just in cout<<slow->next->val;
*/
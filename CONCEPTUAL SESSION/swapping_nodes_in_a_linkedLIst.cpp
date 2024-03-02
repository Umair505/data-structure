/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *first = head;
        for(int i=1;i<k;i++)
        {
            first = first->next;
        }
        ListNode *slow = head;
        ListNode *fast =first; 
        while(fast!=NULL && fast->next !=NULL)
        {
            slow = slow->next;
            fast = fast->next;
        }
        swap(first->val,slow->val);
        return head;
    }
};
//Link->https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/
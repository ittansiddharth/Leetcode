Given a linked list, remove the nth node from the end of list and return its head.

For example,

   Given linked list: 1->2->3->4->5, and n = 2.

   After removing the second node from the end, the linked list becomes 1->2->3->5.

Note:
Given n will always be valid.


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        struct ListNode *newhead;
        newhead = head;
        struct ListNode *nhead = new ListNode(0);
        nhead -> next = head;
        struct ListNode *prev = nhead, *nprev = nhead;
        if(!head)
        {
            return nullptr;
        }
        if(!head -> next)
        {
            return nullptr;
        }
        for(int i = 1; i <= n ; i++)
        {
            nprev = nprev -> next;
        } 
        while(nprev -> next)
        {
            nprev = nprev -> next;
            prev = prev -> next;
        }
        struct ListNode *dnode = prev -> next;
        prev -> next = prev -> next -> next;
        delete dnode;
        return nhead -> next;
    }
};

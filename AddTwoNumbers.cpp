You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8


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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum;
        struct ListNode* p = NULL;
        struct ListNode* temp = NULL;
        struct ListNode* head = NULL;
        int carry = 0;
        while(l1 || l2 || carry)
        {
            sum = (carry) + ((l1)? l1 -> val : 0 ) + ((l2)? l2 -> val : 0);
            carry = (sum >= 10)? 1 : 0;
            sum = sum % 10;
            if(head == NULL)
            {
                head = new ListNode(sum);
                p = head;
            }
            else
            {
                temp = new ListNode(sum);
                p -> next = temp;
                p = p -> next;
           }
            l1 = (l1)? l1 -> next : l1;
            l2 = (l2)? l2 -> next : l2;
        }
        return head  ;
        
    }
};

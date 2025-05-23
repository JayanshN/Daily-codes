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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

     ListNode* la = headA;
     ListNode* lb = headB;

     while(la != lb){
        la = (la != nullptr) ? la->next : headB;
        lb = (lb != nullptr) ? lb->next : headA;
     }

     return la;

    }
};
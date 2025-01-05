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
    ListNode* middleNode(ListNode* head) {

        if(head->next == NULL){
            return head;
        }

        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            cnt++;
        }

        int mid = cnt/2;

        ListNode* mid_node;

        while(mid != 0){
            head = head->next;
            mid_node = head;
            mid--;
        }

        return mid_node;
    }
};
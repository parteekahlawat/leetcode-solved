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
        ListNode* temp2 = headA;
        while(temp2!=NULL){
            ListNode *temp1 = headB;
            while(temp1!=NULL){
            if(temp2 == temp1){
                return temp1;
            }
            temp1 = temp1->next;
            }
            temp2 = temp2->next;
        }
        return NULL;
    }
};
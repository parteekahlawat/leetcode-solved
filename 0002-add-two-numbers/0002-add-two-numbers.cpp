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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int tmp = l1->val + l2->val;
        ListNode* ans = new ListNode(tmp%10);
        int cry=0;
        if(tmp>9){
            cry=1;
        }
        l1 = l1->next;
        l2 = l2->next;
        ListNode* head = ans;
        while(l1!=NULL && l2!=NULL){
            tmp = l1->val + l2->val+cry;
            ListNode* temp = new ListNode(tmp%10);
            if(tmp>9){
                cry=1;
            }
            else 
                cry=0;
            ans->next = temp;
            ans = temp;
        l1 = l1->next;
        l2 = l2->next;
        }
        if(l1==NULL){
            while(l2!=NULL){
            tmp = l2->val + cry;
               ListNode* temp = new ListNode(tmp%10);
            if(tmp>9){
                cry=1;
            }
            else 
                cry=0;
            ans->next = temp;
            ans = temp; 
            l2 = l2->next;
            }
        }
        else if(l2==NULL){
            while(l1!=NULL){
            tmp = l1->val + cry;
               ListNode* temp = new ListNode(tmp%10);
            if(tmp>9){
                cry=1;
            }
            else 
                cry=0;
            ans->next = temp;
            ans = temp; 
            l1 = l1->next;
            }
        }
        if(cry==1){
            ListNode* temp = new ListNode(cry);
            ans->next = temp;
            ans = temp; 
        }
        return head;
    }
};
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode* head = ans;
        if(l1==NULL){
            return l2;
        }
        else if(l2==NULL){
            return l1;
        }
        if(l1->val>=l2->val){
            ans->val = l2->val;
            l2 = l2->next;
        }
        else{
            ans->val = l1->val;
            l1 = l1->next;
        }
        while(l1!=NULL && l2!=NULL){
            ListNode* temp = new ListNode();
            if(l1->val >= l2->val){
                temp->val = l2->val;
                ans->next = temp;
                ans = temp;
                l2 = l2->next;
            }
            else{
                temp->val = l1->val;
                ans->next = temp;
                ans = temp;
                l1 = l1->next;
            }
        }
        if(l1==NULL){
            ans->next = l2;
        }
        else {
            ans->next = l1;
        }
        return head;
    }
};
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
    void removeVal(ListNode* &head, int n){
        ListNode *tmp2 = head;
        if(head->val==n){
            head = head->next;
            return;
        }
        while(tmp2->next->val!=n){
            tmp2 = tmp2->next;
            if(tmp2->next==NULL){
                //data not found
                return;
            }
        }
        tmp2->next = tmp2->next->next;
    }
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        int cnt=0;
        while(temp!=NULL){
            if(temp->val==val){
                cnt++;
            }
            temp = temp->next;
        }
        ListNode* temp1 = head;
        while(cnt){
            if(temp1->val==val){
                removeVal(head, val);
                cnt--;
            } 
            else{
                temp1 = temp1->next;
            }
        }
        return head;
    }
};
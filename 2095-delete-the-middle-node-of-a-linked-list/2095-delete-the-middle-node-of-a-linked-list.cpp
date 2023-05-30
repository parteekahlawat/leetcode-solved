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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *temp = head;
        int ttl=0;
        while(temp !=NULL){
            temp = temp->next;
            ttl++;
        }
        if(ttl==1){
            return NULL;
        }
        int rmv;
        if(ttl%2==0){
            rmv = ttl/2 +1;
        }
        else{
            rmv = (ttl+1)/2;
        }
        int k = rmv;
        int cnt = 1;
   ListNode *tmp = head;
    if(k==1){
        // head = head->next;
        return head;
    }

    while(cnt!=k-1){
        cnt++;
        tmp = tmp->next;
    }
    tmp->next = tmp->next->next;
    
    return head;
    }
};
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int ttl=0;
        while(temp!=NULL){
            ttl++;
            temp = temp->next;
        }
        
        
    int cnt = 1;
    int k = ttl-n+1;
    ListNode *tmp = head;
    if(k==1){
        head = head->next;
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
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right) return head;
        ListNode* temp = head;
        int i = 1;
        ListNode *l, *r, *prev = NULL, *next = NULL;
        while (i < left) {
            prev = temp;
            temp = temp->next;
            i++;
        }
        l = temp;
        while (i < right) {
            temp = temp->next;
            i++;
        }
        r = temp;
        if (temp->next) {
            next = temp->next;
        }
        if (prev != NULL) {
            prev->next = r;
        }
        else {
            head = r;
        }
        temp = l;
        while (temp != next) {
            ListNode* curr = temp->next;
            temp->next = prev;
            prev = temp;
            temp = curr;
        }
        l->next = next;
        return head;
    }  
};
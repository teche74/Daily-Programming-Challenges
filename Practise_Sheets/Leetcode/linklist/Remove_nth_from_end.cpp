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
        ListNode d(-1);
        d.next = head;

        ListNode * slow = &d;
        ListNode * fast = &d;

        for(int i=0;i<=n;i++){
            fast =fast->next;
        }

        while(fast!=NULL){
            fast=fast->next;
            slow =slow->next;
        }

        ListNode * rem = slow->next;
        slow->next =slow->next->next;

        delete (rem);
        return d.next;
    }
};
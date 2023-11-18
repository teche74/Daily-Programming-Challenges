
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int x, y , carry=0;

        ListNode * res = new ListNode  (-1);
        ListNode * tail = res;

        while(l1 || l2 || carry){
            x = l1 != nullptr ? l1->val : 0;
            y = l2 != nullptr ? l2->val : 0;

            int sum = x+y+carry;
            carry = sum > 9 ? 1 : 0;
            sum = sum > 9 ? sum%10 : sum;

            tail->next  = new ListNode (sum);
            tail = tail->next;

            l1 = l1!=nullptr ? l1->next : l1;
            l2 = l2!=nullptr ? l2->next : l2;
        }   

        if(carry){
            tail ->next = new ListNode (1);
            tail = tail->next;
        }
        tail->next =nullptr;

        return res->next;
    }
};

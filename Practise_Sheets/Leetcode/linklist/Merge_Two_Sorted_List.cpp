class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr) return list2;
        if(list2 == nullptr) return list1;

        ListNode * res = new ListNode(-1);
        ListNode * tail = res;

        while(list1 && list2){
            if(list1 ->val  > list2->val){
                tail->next =list2;
                list2=list2->next;
                tail=tail->next;
            }
            else if(list1 ->val  < list2->val){
                tail->next =list1;
                list1=list1->next;
                tail=tail->next;
            }
            else{
                tail->next  = list1;
                list1 =list1->next;
                tail = tail->next;
                tail->next =list2;
                list2 = list2->next;
                tail =tail->next;
            }

            if(list1 == nullptr){
                tail->next = list2;
                break;
            }
            else if(list2 == nullptr){
                tail->next = list1;
                break;
            }
        }
        return res->next;
    }
};
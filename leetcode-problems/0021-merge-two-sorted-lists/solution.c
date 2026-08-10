/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode temp;
    struct ListNode *end = &temp;

    while(l1!=NULL && l2!=NULL){
        if(l1->val <=l2->val){
            end->next=l1;
            l1=l1->next;
        }else{
            end->next=l2;
            l2=l2->next;
        }
        end=end->next;
    }
    end->next=l1!=NULL ?l1:l2;
    return temp.next;
}

/**
 * Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};
*/
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int c=0;
    struct ListNode temp;
    struct ListNode *p=l1,*prev=&temp;
    temp.next=p;
    while(l1!=NULL || l2!=NULL){
        int sum =0;
        if(l1!=NULL){
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2!=NULL){
            if(p==NULL){
                prev->next=l2;
                p=l2;
            }
            sum+=l2->val;
            l2=l2->next;
        }
        sum+=c;
        c=sum/10;
        p->val=sum%10;
        prev=p;
        p=p->next;
    }
    if(c){
        p=malloc(sizeof(*p));
        p->val=c;
        p->next=NULL;
        prev->next=p;
    }
    return temp.next;
}

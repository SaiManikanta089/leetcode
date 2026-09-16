/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseBetween(struct ListNode* head, int left, int right) {
    struct ListNode *dummy,*prev;
    dummy=(struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next=head;
    prev=dummy;
    int c=1;
    while(c<left&& prev->next!=NULL)
    {
        prev=prev->next;
        c++;
    }
    struct ListNode *cur,*temp;
    c=left;
    cur=prev->next;
   
    while(c<right)
    {
        temp=cur->next;
        cur->next=temp->next;
        temp->next=prev->next;
        prev->next=temp;
        c++;
    }
    return dummy->next;

}
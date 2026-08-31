/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 #include <stdlib.h>
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *temp=head,*t=NULL;
    if(temp==NULL)
    {
        return NULL;
    }
    while( temp!=NULL)
    {
        if(temp->val==val)
        {
            if(temp==head)
            {
                head=head->next;
                temp=head;
            }
            else
            {
                t->next=temp->next;
                temp=temp->next;
            }
        }
       else
       {
        t=temp;
        temp=temp->next;
       }
    }
    return head;
}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *temp=head,*temp2=head;
    while(temp2!=NULL && temp2->next!=NULL)
    {
        temp=temp->next;
        temp2=temp2->next->next;
    
        if(temp==temp2)
        {
            return true;
        }
    } 
    
    return false;
} 
    
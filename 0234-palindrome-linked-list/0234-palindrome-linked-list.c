/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode *temp=head,*end;
    int a[500000],i=0;
    while(temp!=NULL)
    {
        a[i]=temp->val;
        i++;
        temp=temp->next;
    }
    temp=head;
    i--;
    while(temp!=NULL)
    {
        if(temp->val!=a[i])
        {
            return false;
        }
        temp=temp->next;
        i--;
    }
    return true;
}
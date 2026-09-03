/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    int m=(count/2)+1;
    int c=1;
    temp=head;
    while(c!=m && temp->next!=NULL)
    {
        c++;
        temp=temp->next;
    }
    return temp;
}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int numComponents(struct ListNode* head, int* nums, int numsSize) {
   struct ListNode *temp=head;
   int present[20890]={0},count=0;
   for(int i=0;i<numsSize;i++)
   {
    present[nums[i]]=1;
   }
   while(temp!=NULL)
   {
    if(present[temp->val])
    {
        if(temp->next==NULL || !present[temp->next->val])
        {
            count++;
        }
    }
    temp=temp->next;
   }
   return count;
}
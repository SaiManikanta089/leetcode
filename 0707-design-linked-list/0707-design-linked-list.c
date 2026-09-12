

struct node
{
    int val;
    struct node *next;
};
typedef struct {
   struct node *start;
} MyLinkedList;


MyLinkedList* myLinkedListCreate() {
    MyLinkedList *new=malloc(sizeof(MyLinkedList));
    new->start=NULL;
    return new;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    struct node *temp=obj->start;
    if(index<0)
    {
        return -1;
    }
    else
    {
        int c=0;
        while(temp!=NULL&&c<index )
        {
            temp=temp->next;
            c++;
        }
        if(temp==NULL)
        {
            return -1;
        }
        return temp->val;
    }
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    struct node *new;
    new=(struct node*)malloc(sizeof(struct node));
    new->val=val;
    new->next=obj->start;
    obj->start=new;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    struct node *temp=obj->start,*new;
    new=(struct node*)malloc(sizeof(struct node));
     new->val=val;
    new->next=NULL;
    if(temp==NULL)
    {
        obj->start=new;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
   
    temp->next=new;
    
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    struct node *temp=obj->start,*new;
    new=(struct node*)malloc(sizeof(struct node));
    int c=0;
     if(index<0)
    {
        return;
    }
    if(index==0)
    {
        myLinkedListAddAtHead(obj, val);
        return;
    }
    while(c<index-1 && temp!=NULL)
    {
        temp=temp->next;
        c++;
    }
    new->val=val;
    new->next=temp->next;
    temp->next=new;
}   

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    struct node *temp=obj->start;
   
    int c=0;
    if(index==0)
    {
        obj->start=obj->start->next;
        free(temp);
        return;
    }
    else
    {
        while(c!=index-1 && temp->next!=NULL)
        {
            temp=temp->next;
            c++;
        }
        if(temp==NULL || temp->next==NULL)
        {
            return;
        }
        struct node *t=temp->next;
        temp->next=t->next;
        free(t);
    }

}

void myLinkedListFree(MyLinkedList* obj) {
    struct node *temp=obj->start;
    while(temp!=NULL)
    {
        struct node *t=temp;
        temp=temp->next;
        free(t);

    }
    free(obj);
}

/**
 * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);
 
 * myLinkedListAddAtHead(obj, val);
 
 * myLinkedListAddAtTail(obj, val);
 
 * myLinkedListAddAtIndex(obj, index, val);
 
 * myLinkedListDeleteAtIndex(obj, index);
 
 * myLinkedListFree(obj);
*/
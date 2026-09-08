

typedef struct
{
    int arr[1000];
    int top;
}stack;
typedef struct {
    stack s1;
    stack s2;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue *obj=malloc(sizeof(MyQueue));
    obj->s1.top=-1;
    obj->s2.top=-1;
    return obj;
}

void myQueuePush(MyQueue* obj, int x) {
   
     while(obj->s1.top>=0)
    {
        obj->s2.arr[++obj->s2.top]=obj->s1.arr[obj->s1.top--];
    }
    obj->s2.arr[++obj->s2.top]=x;
    while(obj->s2.top>=0)
    {
        obj->s1.arr[++obj->s1.top]=obj->s2.arr[obj->s2.top--];
    }
    
}

int myQueuePop(MyQueue* obj) {
    return (obj->s1.arr[obj->s1.top--]);
}

int myQueuePeek(MyQueue* obj) {
    return (obj->s1.arr[obj->s1.top]);
}

bool myQueueEmpty(MyQueue* obj) {
    return (obj->s1.top==-1);
}

void myQueueFree(MyQueue* obj) {
    free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/


typedef struct
{
    int arr[10000];
    int front;
    int rear;
}Queue;
typedef struct {
    Queue q1;
    Queue q2;
} MyStack;


MyStack* myStackCreate() {
    MyStack *obj=malloc(sizeof(MyStack));
    obj->q1.front=0;
    obj->q1.rear=-1;
    obj->q2.front=0;
    obj->q2.rear=-1;
    return obj;
}

void myStackPush(MyStack* obj, int x) {
    obj->q2.arr[++obj->q2.rear]=x;
    while(obj->q1.front<=obj->q1.rear)
    {
        obj->q2.arr[++obj->q2.rear]=obj->q1.arr[obj->q1.front++];
    }
    Queue temp=obj->q1;
    obj->q1=obj->q2;
    obj->q2=temp;

    obj->q2.front=0;
    obj->q2.rear=-1;
}

int myStackPop(MyStack* obj) {
    return obj->q1.arr[obj->q1.front++];
}

int myStackTop(MyStack* obj) {
    return obj->q1.arr[obj->q1.front];
}

bool myStackEmpty(MyStack* obj) {
    return obj->q1.rear<obj->q1.front;
}

void myStackFree(MyStack* obj) {
    free(obj);
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/



typedef struct {
    int st[100000],minStack[100000],top;
    
} MinStack;


MinStack* minStackCreate() {
    MinStack *obj=malloc(sizeof(MinStack));
    obj->top=-1;
    return obj;
}

void minStackPush(MinStack* obj, int value) {
    obj->top++;
    obj->st[obj->top]=value;
    if(obj->top==0)
    {
        obj->minStack[obj->top]=value;
    }
    else
    {
        obj->minStack[obj->top]=(value<obj->minStack[obj->top-1])?value:obj->minStack[obj->top-1];
    }
    
}

void minStackPop(MinStack* obj) {
   obj->top--;
}

int minStackTop(MinStack* obj) {
    return obj->st[obj->top];
    
}

int minStackGetMin(MinStack* obj) {
    return obj->minStack[obj->top];
}

void minStackFree(MinStack* obj) {
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, value);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/

int calPoints(char** operations, int operationsSize) {
    int st[10000];
    int top=-1;
    for(int i=0;i<operationsSize;i++)
    {
        char *ch=operations[i];
        if(ch[0]=='+')
        {
            top++;
            int a=st[top-2];
            int b=st[top-1];
            st[top]=a+b;
            
        }
        else if(ch[0]=='C')
        {
            top--;
        }
        else if(ch[0]=='D')
        {
            int x=st[top];
            st[++top]=2*x;
        }
        else
        {
            st[++top]=atoi(ch);
        }
    }
    int sum=0;
    for(int i=0;i<=top;i++)
    {
        sum=sum+st[i];
    }
    return sum;
}    
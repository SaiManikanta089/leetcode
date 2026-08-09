#include<stdbool.h>
char st[10000];
int top=-1;
void push(char x)
{
    st[++top]=x;
}
char pop()
{
    return st[top--];
}
char peak()
{
    return st[top];
}
bool isValid(char* s) {
    top=-1;
    for(int i=0;s[i]!='\0';i++)
    {
        char ch=s[i];
        if(ch=='{' || ch=='(' || ch=='[')
        {
            push(ch);
        }
        else 
        {
            if(top==-1)
            {
                return false;
            }
            char c=peak();
            if(ch=='}' && c!='{' ||ch==')' && c!='('||ch==']' && c!='[')
            {
                return false;
            }
            pop();
        }
    }
    return top==-1;
}

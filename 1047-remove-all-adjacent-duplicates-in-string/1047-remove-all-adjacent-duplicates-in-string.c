char* removeDuplicates(char* s) {
    char st[1000];
    int top=-1;
    int i=0;
    while(s[i]!='\0')
    {
        char ch=s[i];
        s[++top]=ch;
        if(top>=1 && s[top]==s[top-1])
        {
            top--;
            top--;
        }
        i++;
    }
    s[++top]='\0';
    return s;
}
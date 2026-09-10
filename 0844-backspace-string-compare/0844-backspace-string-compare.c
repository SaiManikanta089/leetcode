bool backspaceCompare(char* s, char* t) {
    char st1[10000];
    char st2[10000];
    int top1=-1,top2=-1;
    int i=0;
    int j=0;
    while(s[i]!='\0')
    {
        char a=s[i];
        if(s[i]!='#')
        {
            st1[++top1]=a;
        }
        else
        {
            if(top1>=0)
               top1--;
        }
        i++;
    }
    //--------------------------------------
     while(t[j]!='\0')
    {
        char a=t[j];
        if(t[j]!='#')
        {
            st2[++top2]=a;
        }
        else
        { 
            if(top2>=0)
               top2--;
        }
        j++;
    }
    while(top1!=-1 && top2!=-1)
    {
        
        if(st1[top1]!=st2[top2])
        {
            return false;
        }
        top1--;
        top2--;
    }
    if(top1!=top2)
        {
            return false;
        }
    return true;
}
bool isSubsequence(char* s, char* t)
 {
    int a=0,j=0;
    for(int i=0;i<strlen(t);i++)
    {
        if(s[a]==t[j])
        {
            a++;
            j++;
        }
        else
        {
            j++;
        }
    }
    if(a==strlen(s))
    {
        return true;
    }
    else
    {
        return false;
    }
    
    return 0;
}
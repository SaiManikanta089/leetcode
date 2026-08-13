bool isPalindrome(char* s) {
   int i=0;
   int n=strlen(s);
   char str[n+1];
   int j=0;
   if(s==" ")
   {
    return true;
   }
   while(s[i]!='\0')
   {
    if(isalnum(s[i]))
    {
        str[j]=tolower(s[i]);
        j++;
    }
    i++;
   }
   str[j]='\0';
   int len=strlen(str);
   for(int i=0;i<len/2;i++)
   {
    if(str[i]!=str[len-i-1])
    {
        return false;
    }
   }
   return true;
}
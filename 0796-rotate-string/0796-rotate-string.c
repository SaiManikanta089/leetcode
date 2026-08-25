bool rotateString(char* s, char* goal) {
    char temp[400];
   strcpy(temp,s);
   strcat(temp,s);
   if(strlen(s)!=strlen(goal))
   {
    return false;
   }
   if(strstr(temp,goal))
   {
    return true;
   }
   return false;
}
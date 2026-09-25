import java.util.*;
class Solution {
    public String removeStars(String s) {
        Vector<Character> v=new Vector<>();
        for(int i=0;i<s.length();i++)
        {
           if(s.charAt(i)=='*')
           {
            v.remove(v.size()-1);
           }
           else
           {
            v.add(s.charAt(i));
           }
        }
        
        String k="";
        for(int i=0;i<v.size();i++)
        {
            k=k+v.get(i);
        }
        return k;
    }
}

class Solution {
    int sums(int x)
    {
        int sum=0;
        while(x>0)
        {
            int digit=x%10;
            sum+=digit*digit;
            x/=10;
        }
        return sum;
    }
    public boolean isHappy(int n) {
       int slow=n,fast=n;
       do
       {
        slow=sums(slow);
        fast=sums(sums(fast));
       }while(slow!=fast);
       return slow==1;
    }
}
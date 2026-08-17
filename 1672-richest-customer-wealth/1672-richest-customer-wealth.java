class Solution {
    public int maximumWealth(int[][] accounts) {
        int max=0;
        int sum=0;
        for(int a=0;a<accounts.length;a++)
        {
            sum=0;
           for(int b=0;b<accounts[a].length;b++)
           {
            sum=sum+accounts[a][b];
           }
           if(sum>max)
           {
            max=sum;
           }
        }
        return max;
    }
}
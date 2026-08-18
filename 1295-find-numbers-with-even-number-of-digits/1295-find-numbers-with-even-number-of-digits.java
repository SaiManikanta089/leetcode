class Solution {
    public int findNumbers(int[] nums) {
        int total=0,count=0,digit=0,temp=0;
        for(int i=0;i<nums.length;i++)
        {
            count=0;
            temp=nums[i];
            while(temp>0)
            {
                digit=temp%10;
                count++;
                temp/=10;
            }
            if(count%2==0)
            {
                total++;
            }
        }
        return total;
    }
}
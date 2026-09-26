class Solution {
    public int search(int[] nums, int target) {
 
        int low=0;
        int high=nums.length-1;
        int len=0;
        while(low<=high)
        {
            len=(low+high)/2;
            if(nums[len]==target)
            {
                return len;
            }
            else if(target<nums[len])
            {
                high=len-1;
            }
            else
            {
                low=len+1;
            }
        }
        return -1;
    }
}
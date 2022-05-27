class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int x = n*(n+1)/2;
        int s = 0;
        for(int i = 0; i < nums.length; i++){
            s = s + nums[i];
        }
        return x - s;
    }
}
class Solution {
    public int arrayPairSum(int[] nums) {
        Arrays.sort(nums);
        int x = 0;
        for(int i = 0; i < nums.length/2; i++){
            x = x + nums[2*i];
        }
        return x;
    }
}
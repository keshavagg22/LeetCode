class Solution {
    public int maxProduct(int[] nums) {
        int m1 = 0;
        int m2 = 0;
        int x = 0;
        for(int i = 0; i < nums.length; i++){
            if(nums[i] > m1){
                m1 = nums[i];
                x = i;
            }
        }
        for(int i = 0; i < nums.length; i++){
            if(nums[i] > m2 && i != x){
                m2 = nums[i];
            }
        }
        return (m1 - 1)*(m2 - 1);
    }
}
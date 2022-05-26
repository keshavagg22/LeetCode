class Solution {
    public int arraySign(int[] nums) {
        int x = 0;
        for(int i = 0; i < nums.length; i++){
            if(nums[i] < 0){
                x = x + 1;
            }
            else if(nums[i] == 0){
                return 0;
            }
        }
        if(x%2 == 0){
            return 1;
        }
        else{
            return -1;
        }
    }
}
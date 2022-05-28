class Solution {
    public int sumOfUnique(int[] nums) {
        Arrays.sort(nums);
        int x = 0;
        if(nums.length == 1){
            return nums[0];
        }
        else{
            if(nums[0] != nums[1]){
                x = x + nums[0];
            }
            for(int i = 1; i < nums.length-1; i++){
                if(nums[i] != nums[i+1] && nums[i] != nums[i-1]){
                    x = x + nums[i];
                }
            }
            if(nums[nums.length-1] != nums[nums.length - 2]){
                x = x + nums[nums.length-1];
            }
            return x;
        }
    }
}
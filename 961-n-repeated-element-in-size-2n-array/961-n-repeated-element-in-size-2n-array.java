class Solution {
    public int repeatedNTimes(int[] nums) {
        List<Integer> l = new ArrayList<Integer>();
        for(int i = 0; i < nums.length; i++){
            if(l.contains(nums[i]) == false){
                l.add(nums[i]);
            }
            else{
                return nums[i];
            }
        }
        return 0;
    }
}
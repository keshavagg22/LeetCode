class Solution {
    public int[] smallerNumbersThanCurrent(int[] nums) {
        int[] l = new int[nums.length];
        for(int i = 0; i < nums.length; i++){
            int x = 0;
            for(int j = 0; j < nums.length; j++)
                if(j != i && nums[j] < nums[i]){
                    x = x + 1;
                }
            l[i] = x;
        }
        return l;
    }
}
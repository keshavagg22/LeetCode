class Solution {
    public int[] decompressRLElist(int[] nums) {
        int x = 0;
        for(int i = 0; i < nums.length; i = i + 2){
            x = x + nums[i];
        }
        int[] a = new int[x];
        int y = 0;
        for(int j = 0; j < nums.length ; j = j + 2){
            for(int k = 0; k < nums[j]; k++){
                a[y + k] = nums[j+1];
            }
            y = y + nums[j];
        }
        return a;
    }
}
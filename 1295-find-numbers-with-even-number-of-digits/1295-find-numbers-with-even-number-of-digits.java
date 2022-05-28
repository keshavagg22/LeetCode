class Solution {
    public int findNumbers(int[] nums) {
       int x = 0;
        for(int i = 0; i < nums.length; i++){
            int j = 0;
            int n = nums[i];
            while(n != 0){
                n = n/10;
                j = j + 1;
            }
            if(j%2 == 0){
                x = x + 1;
            }
        }
        return x;
    }
}
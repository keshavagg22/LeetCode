class Solution {
    public int maxProductDifference(int[] nums) {
        int a = 1;
        int b = 1;
        int c = 10000;
        int d = 10000;
        int e = 0;
        int f = 0;
        for(int i = 0; i < nums.length; i++){
            if(nums[i] > a){
                a = nums[i];
                e = i;
            }
        }
        for(int i = 0; i < nums.length; i++){
            if(nums[i] > b && i != e){
                b = nums[i];
            }
        }
        for(int i = 0; i < nums.length; i++){
            if(nums[i] < c){
                c = nums[i];
                f = i;
            }
        }
        for(int i = 0; i < nums.length; i++){
            if(nums[i] < d && i != f){
                d = nums[i];
            }
        }
        return a*b - c*d;
    }
}
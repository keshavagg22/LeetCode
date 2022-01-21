class Solution {
    public int climbStairs(int n) {
        if(n == 1){
            return 1;
        }
        if(n == 2){
            return 2;
        }
        int a = 1;
        int b = 2;
        int t = 0;
        for(int i = 3; i <= n; i++){
            t = a;
            a = b;
            b = b + t;
        }
        return b;
    }
}
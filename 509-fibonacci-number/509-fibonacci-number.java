class Solution {
    public int fib(int n) {
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        int a = 0;
        int b = 1;
        int t = 0;
        for(int i = 2; i <= n; i++){
            t = a;
            a = b;
            b = b + t;
        }
        return b;
    }
}
class Solution {
    public int totalMoney(int n) {
        int x = 1;
        int s = 0;
        int m = n/7;
        for(int i = 0; i < m; i++){
            x = 1 + i;
            for(int j = 0; j < 7; j++){
                s = s + x + j;
            }
        }
        x = 1 + m;
        for(int i = 1; i <= n%7; i++){
            s = s + x + (i-1);
        }
        return s;
    }
}
class Solution {
    public int minOperations(int n) {
        int y = 0;
        int x = n;
        for(int i = 0; i < n/2; i++){
            y = y + (x-(2*i)-1);
        }
        return y;
    }
}
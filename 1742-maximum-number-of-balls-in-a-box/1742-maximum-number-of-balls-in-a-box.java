class Solution {
    public int countBalls(int lowLimit, int highLimit) {
        int[] a = new int[46];
        int m = 0;
        for(int i = lowLimit; i <= highLimit; i++){
            int n = i;
            int s = 0;
            while(n > 0){
                s = s + (n%10);
                n = n/10;
            }
            a[s] = a[s] + 1;
            if(a[s] > m){
                m = a[s];
            }
        }
        return m;
    }
}
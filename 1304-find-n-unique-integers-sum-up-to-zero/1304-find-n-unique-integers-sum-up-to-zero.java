class Solution {
    public int[] sumZero(int n){
        int[] a = new int[n];
        if(n%2 == 0){
            for(int i = 0; i < n/2; i++){
                a[i] = i + 1;
                a[n-1-i] = -(i+1);
            }
        }
        else{
            a[n/2] = 0;
            for(int i = 0; i < n/2; i++){
                a[i] = i + 1;
                a[n-1-i] = -(i+1);
            }
        }
        return a;
    }
}
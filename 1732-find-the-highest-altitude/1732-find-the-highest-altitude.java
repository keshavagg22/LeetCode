class Solution {
    public int largestAltitude(int[] gain) {
        int x = 0;
        int max = 0;
        for(int i = 0; i < gain.length; i++){
            x = x + gain[i];
            if(x > max){
                max = x;
            }
        }
        return max;
    }
}
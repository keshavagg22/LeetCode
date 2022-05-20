class Solution {
    public int sumOddLengthSubarrays(int[] arr) {
        int x = 0;
        if(arr.length%2 == 0){
            x = arr.length - 1;
        }
        else{
            x = arr.length;
        }
        int s = 0;
        for(int  i = 1; i <= x; i = i + 2){
            for(int j = 0; j <= arr.length - i; j++){
                for(int k = 0; k < i; k++){
                    s = s + arr[j + k];
                }
            }
        }
        return s;
    }
}
class Solution {
    public int[] plusOne(int[] digits) {
        if(digits[digits.length - 1] != 9){
            digits[digits.length - 1] = digits[digits.length - 1] + 1;
            return digits;
        }
        int  i = digits.length - 1;
        while(i >= 0){
            if(i == 0 && digits[i] == 9){
                digits[i] = 0;
                int[] a = new int[digits.length + 1];
                for(int j = 0; j < digits.length; j++){
                    a[j + 1] = digits[j];
                }
                a[0] = 1;
                return a;
            }
            else if(digits[i] != 9){
                digits[i] = digits[i] + 1;
                i = -1;
                return digits;
            }
            else{
                digits[i] = 0;
                i = i - 1;
            }
        }
        return digits;
    }
}
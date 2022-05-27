class Solution {
    public int addDigits(int num) {
        int s = 0;
        if(num >= 0 && num <= 9){
            return num;
        }
        else{
            while(num != 0){
                s = s + (num%10);
                num = num/10;
            }
            return addDigits(s);
        }
    }
}
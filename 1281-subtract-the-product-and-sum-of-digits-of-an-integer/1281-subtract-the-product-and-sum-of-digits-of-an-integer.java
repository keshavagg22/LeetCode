class Solution {
    public int power(int n){
        if(n == 0){
            return 1;
        }
        else{
            return 10*power(n-1);
        }
    }
    
    public int subtractProductAndSum(int n) {
        int i = 0;
        while(n/power(i) != 0){
            i = i + 1;
        }
        int[] l = new int[i];
        int x = 1;
        int y = 0;
        for(int j = 0; j < i; j++){
            l[j] = n%power(1);
            n = n/power(1);
            x = x*l[j];
            y = y + l[j];
        }
        return x - y;
    }
}
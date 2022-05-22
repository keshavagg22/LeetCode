class Solution {
    public int power(int m, int n){
        if(n == 0){
            return 1;
        }
        else{
            return m*power(m,n-1);
        }
    }
    public int maximum69Number (int num) {
        List<Integer> a = new ArrayList<Integer>();
        while(num != 0){
            a.add(num%10);
            num = num/10;
        }
        boolean x = false;
        for(int i = a.size() - 1; i >= 0; i--){
            if(a.get(i) == 6 && x == false){
                a.set(i,9);
                x = true;
            }
        }
        int y = 0;
        for(int i = 0; i < a.size(); i++){
            y = y + (a.get(i)*power(10,i));
        }
        return y;
    }
}
class Solution {
    public int numberOfBeams(String[] bank) {
        int m = bank.length;
        int n = bank[0].length();
        int x = 0;
        List<Integer> a = new ArrayList<Integer>();
        for(int i = 0; i < m; i++){
            int y = 0;
            for(int j = 0; j < n; j++){
                char c = bank[i].charAt(j);
                if(c == '1'){
                    y = y + 1;
                }
            }
            if(y != 0){
                a.add(y);
            }
        }
        for(int i = 0; i < a.size()-1; i++){
            x = x + a.get(i)*a.get(i+1);
        }
        return x;
    }
}
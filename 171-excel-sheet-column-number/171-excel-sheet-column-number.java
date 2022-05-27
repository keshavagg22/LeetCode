class Solution {
    public int titleToNumber(String columnTitle) {
        int[] a = new int[columnTitle.length()];
        int x = 0;
        int y = 1;
        for(int i = a.length - 1; i >= 0; i--){
            char c = columnTitle.charAt(i);
            int z = c - 'A' + 1;
            a[a.length - 1 - i] = z;
        }
        for(int i = 0; i < a.length; i++){
            x = x + y*a[i];
            y = y*26;
        }
        return x;
    }
}
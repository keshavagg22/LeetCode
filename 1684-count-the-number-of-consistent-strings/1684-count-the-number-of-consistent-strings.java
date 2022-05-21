class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
        char[] a = new char[allowed.length()];
        for(int i = 0; i < allowed.length(); i++){
            a[i] = allowed.charAt(i);
        }
        int y = 0;
        for(int i = 0; i < words.length; i++){
            int x = 0;
            char[] b = new char[words[i].length()];
            for(int j = 0; j < words[i].length(); j++){
                b[j] = words[i].charAt(j);
                for(int k = 0; k < a.length; k++){
                    if(a[k] == b[j]){
                        x = x + 1;
                    }
                } 
            }
            if(x == words[i].length()){
                y = y + 1;
            }
        }
        return y;
    }
}
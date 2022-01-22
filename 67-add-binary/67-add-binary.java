class Solution {
    public String addBinary(String a, String b) {
        int m = a.length();
        int n = b.length();
        String s = new String();
        int y = 0;
        if(m >= n){
            for(int i = n-1; i >= 0; i--){
                if(y == 0){
                    if(a.charAt(m - n + i) == '1' && b.charAt(i) == '0'){
                        s = '1' + s;
                    }
                    else if(a.charAt(m - n + i) == '0' && b.charAt(i) == '0'){
                        s = '0' + s;
                    }
                    else if(a.charAt(m - n + i) == '0' && b.charAt(i) == '1'){
                        s = '1' + s;
                    }
                    else if(a.charAt(m - n + i) == '1' && b.charAt(i) == '1'){
                        s = '0' + s;
                        y = 1;
                    }
                }
                else{
                    if(a.charAt(m - n + i) == '1' && b.charAt(i) == '0'){
                        s = '0' + s;
                        y = 1;
                    }
                    else if(a.charAt(m - n + i) == '0' && b.charAt(i) == '0'){
                        s = '1' + s;
                        y = 0;
                    }
                    else if(a.charAt(m - n + i) == '0' && b.charAt(i) == '1'){
                        s = '0' + s;
                        y = 1;
                    }
                    else if(a.charAt(m - n + i) == '1' && b.charAt(i) == '1'){
                        s = '1' + s;
                        y = 1;
                    }
                }
            }
            for(int i = m - n - 1; i >= 0; i--){
                if(a.charAt(i) == '1' && y == 1){
                    s = '0' + s;
                    y = 1;
                }
                else if(a.charAt(i) == '0' && y == 1){
                    s = '1' + s;
                    y = 0;
                }
                else if(a.charAt(i) == '1' && y == 0){
                    s = '1' + s;
                    y = 0;
                }
                else if(a.charAt(i) == '0' && y == 0){
                    s = '0' + s;
                    y = 0;
                }
                
            }
            if(y == 1){
                s = '1' + s;
            }
            return s;
        }
        else{
            return addBinary(b,a);
        }
    }
}
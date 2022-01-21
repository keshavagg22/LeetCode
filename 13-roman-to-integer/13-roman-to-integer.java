class Solution {
    public int romanToInt(String s) {
        int x = 0;
        for(int i = 0; i < s.length() - 1; i++){
            if(s.charAt(i) == 'I' && s.charAt(i+1) == 'V'){
                x = x - 1;
            }
            else if(s.charAt(i) == 'I' && s.charAt(i+1) == 'X'){
                x = x - 1;
            }
            else if(s.charAt(i) == 'X' && s.charAt(i+1) == 'L'){
                x = x - 10;
            }
            else if(s.charAt(i) == 'X' && s.charAt(i+1) == 'C'){
                x = x - 10;
            }
            else if(s.charAt(i) == 'C' && s.charAt(i+1) == 'D'){
                x = x - 100;
            }
            else if(s.charAt(i) == 'C' && s.charAt(i+1) == 'M'){
                x = x - 100;
            }
            else if(s.charAt(i) == 'I'){
                x = x + 1;
            }
            else if(s.charAt(i) == 'V'){
                x = x + 5;
            }
            else if(s.charAt(i) == 'X'){
                x = x + 10;
            }
            else if(s.charAt(i) == 'L'){
                x = x + 50;
            }
            else if(s.charAt(i) == 'C'){
                x = x + 100;
            }
            else if(s.charAt(i) == 'D'){
                x = x + 500;
            }
            else if(s.charAt(i) == 'M'){
                x = x + 1000;
            } 
        }
        int i = s.length() - 1;
        if(s.charAt(i) == 'I'){
             x = x + 1;
        }
        else if(s.charAt(i) == 'V'){
            x = x + 5;
        }
        else if(s.charAt(i) == 'X'){
            x = x + 10;
        }
        else if(s.charAt(i) == 'L'){
            x = x + 50;
        }
        else if(s.charAt(i) == 'C'){
            x = x + 100;
        }
        else if(s.charAt(i) == 'D'){
            x = x + 500;
        }
        else if(s.charAt(i) == 'M'){
            x = x + 1000;
        }
        return x;
    }
}
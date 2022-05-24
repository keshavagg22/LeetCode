class Solution {
    public int minCostToMoveChips(int[] position) {
        int x = 0;
        int y = 0;
        for(int i = 0; i < position.length; i++){
            if(position[i]%2 == 0){
                x = x + 1;
            }
            else{
                y = y + 1;
            }
        }
        if(x > y){
            return y;
        }
        else{
            return x;
        }
    }
}
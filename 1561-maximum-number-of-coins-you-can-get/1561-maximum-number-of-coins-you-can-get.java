class Solution {
    public int maxCoins(int[] piles) {
        Arrays.sort(piles);
        int x = piles.length/3;
        int y = 0;
        for(int i = 0; i < x; i++){
            y = y + piles[piles.length - 2 - 2*i];
        }
        return y;
    }
}
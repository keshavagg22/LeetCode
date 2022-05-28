class Solution {
    public int maxIncreaseKeepingSkyline(int[][] grid) {
        int n = grid.length;
        int[] col = new int[n], row = new int[n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                row[i] = Math.max(row[i], grid[i][j]);
                col[j] = Math.max(col[j], grid[i][j]);
            }
        }
        int x = 0;
        for (int i = 0; i < grid.length; i++){
            for (int j = 0; j < grid.length; j++){
                x = x + Math.min(row[i], col[j]) - grid[i][j];
            }
        }
        return x;
    }
}
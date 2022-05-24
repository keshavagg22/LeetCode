class Solution {
    public int projectionArea(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        int x = 0;
        int y = 0;
        int z = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] != 0){
                    x = x + 1;
                }
            }
        }
        for(int i = 0; i < m; i++){
            int max = 0;
            for(int j = 0; j < n; j++){
                if(grid[i][j] > max){
                    max = grid[i][j];
                }
            }
            y = y + max;
        }
        for(int i = 0; i < n; i++){
            int max = 0;
            for(int j = 0; j < m; j++){
                if(grid[j][i] > max){
                    max = grid[j][i];
                }
            }
            z = z + max;
        }
        return x + y + z;
    }
}
class Solution {
    public int[] countPoints(int[][] points, int[][] queries) {
        int[] answer = new int[queries.length];
        for(int i = 0; i < queries.length; i++){
            int a = 0;
            for(int j = 0; j < points.length; j++){
                int x1 = points[j][0];
                int y1 = points[j][1];
                int x2 = queries[i][0];
                int y2 = queries[i][1];
                int r = queries[i][2];
                if(((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)) <= r*r){
                    a = a + 1;
                }
            }
            answer[i] = a;
        }
        return answer;
    }
}
class Solution {
    public int minTimeToVisitAllPoints(int[][] points) {
        int x = 0;
        for(int i = 0; i < points.length - 1; i++){
            int a = 0;
            int b = 0;
            if(points[i][0] - points[i+1][0] > 0){
                a = points[i][0] - points[i+1][0];
            }
            else if(points[i][0] - points[i+1][0] < 0){
                a = points[i+1][0] - points[i][0];
            }
            if(points[i][1] - points[i+1][1] > 0){
                b = points[i][1] - points[i+1][1];
            }
            else if(points[i][1] - points[i+1][1] < 0){
                b = points[i+1][1] - points[i][1];
            }
            if(a>b){
                x = x + a;
            }
            else{
                x = x + b;
            }
        }
        return x;
    }
}
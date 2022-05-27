class Solution {
    public int[] distributeCandies(int candies, int num_people) {
        int[] a = new int[num_people];
        int i = 0;
        int j = 1;
        while(candies != 0){
            if(i >= num_people){
                i = 0;
            }
            if(j < candies){
                a[i] = a[i] + j;
                i = i + 1;
                candies = candies - j;
                j = j + 1;
            }
            else{
               a[i] = a[i] + candies;
                i = i + 1;
                candies = 0;
            }
        }
        return a;
    }
}
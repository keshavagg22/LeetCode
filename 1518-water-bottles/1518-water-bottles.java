class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        int x = numBottles;
        int y = numBottles;
        while(numBottles >= numExchange){
            x = x + numBottles/numExchange;
            y = numBottles%numExchange;
            numBottles = numBottles/numExchange + y; 
        }
        return x;
    }
}
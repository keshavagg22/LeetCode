class Solution {
    public int countEven(int num) {
        // Digit sum of the last number, we can get each digit this way sicne the range is [1, 1000]
        int sum = num % 10 + (num / 10) % 10 + (num / 100) % 10 + (num / 1000) % 10;

        // Check the parity of the digit sum of the last number
        return (num - (sum & 1)) / 2;
    }
}
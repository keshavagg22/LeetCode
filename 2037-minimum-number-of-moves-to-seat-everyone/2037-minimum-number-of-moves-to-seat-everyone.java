class Solution {
    public int minMovesToSeat(int[] seats, int[] students) {
        Arrays.sort(seats);
        Arrays.sort(students);
        int x = 0;
        for(int i = 0; i < seats.length; i++){
            if(seats[i] > students[i]){
                x = x + seats[i] - students[i];
            }
            else{
                x = x + students[i] - seats[i];
            }
        }
        return x;
    }
}
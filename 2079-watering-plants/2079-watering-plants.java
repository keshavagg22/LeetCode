class Solution {
    public int wateringPlants(int[] plants, int capacity) {
        int x = 1;
        int y = capacity;
        int z = 0;
        for(int i = 0; i < plants.length; i++){
            if(y < plants[i]){
                y = capacity - plants[i];
                x = x + 2*i + 1;
                z = z + 1;
            }
            else{
                y = y - plants[i];
            }
            x = x + 1;
        }
        return x - z - 1;
    }
}
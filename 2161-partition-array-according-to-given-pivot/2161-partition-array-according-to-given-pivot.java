class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        List<Integer> a = new ArrayList<Integer>();
        List<Integer> b = new ArrayList<Integer>();
        List<Integer> c = new ArrayList<Integer>();
        for(int i = 0; i < nums.length; i++){
            if(nums[i] < pivot){
                a.add(nums[i]);
            }
            if(nums[i] > pivot){
                b.add(nums[i]);
            }
            if(nums[i] == pivot){
                c.add(nums[i]);
            }
        }
        int[] l = new int[nums.length];
        for(int i = 0; i < a.size(); i++){
            l[i] = a.get(i);
        }
        for(int i = 0; i < c.size(); i++){
            l[i + a.size()] = c.get(i);
        }
        for(int i = 0; i < b.size(); i++){
            l[i + a.size() + c.size()] = b.get(i);
        }
        return l;
    }
}
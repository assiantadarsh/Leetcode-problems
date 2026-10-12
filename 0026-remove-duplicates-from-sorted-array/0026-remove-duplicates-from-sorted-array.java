class Solution {
    public int removeDuplicates(int[] nums) {
        
        int n = nums.length;

        int i = 0, j = 1, k = 0;

        while(j < n){
            if(nums[i] != nums[j]){
                nums[k++] = nums[i];
                i = j;
            }
            j++;
        }
        nums[k++] = nums[j - 1];
        return k;
    }
}
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int numsSize = nums.size();

        if(numsSize == 0) return 0;

        int i = 0, j = 1, k = 0;

        while(j < numsSize) {
            if(nums[i] != nums[j]) {
                nums[k++] = nums[i];
                i = j;
            }
            j++;
        }
        nums[k++] = nums[i];

        return k;
    }
};
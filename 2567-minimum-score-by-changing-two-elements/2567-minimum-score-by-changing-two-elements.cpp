class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        
        sort(nums.begin() , nums.end());

        int n = nums.size();

        int c1 = nums[n - 1] - nums[2];
        int c2 = nums[n - 2] - nums[1];
        int c3 = nums[n - 3] -  nums[0];
        
        return min(c1 , min(c2 , c3));

    }
};
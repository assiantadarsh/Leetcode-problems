class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int maxpd = nums[0];
        int minpd = nums[0];
        int ans = nums[0];

        for(int i = 1; i < nums.size(); i++){
            int prevmax = maxpd;
            int prevmin = minpd;

            maxpd = max(nums[i] , max(prevmax * nums[i] , prevmin * nums[i]));
            minpd = min(nums[i] , min(prevmax * nums[i] , prevmin * nums[i]));

            ans = max(ans , maxpd);
        }

        return ans;
    }
};
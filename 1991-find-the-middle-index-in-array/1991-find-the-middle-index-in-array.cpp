class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total = 0;

        for(int x : nums){
            total += x;
        }

        int left_sum = 0;

        for(int i = 0; i < nums.size(); i++){

            int right_sum = total - nums[i] - left_sum;

            if(right_sum == left_sum){
                return i;
            }

            left_sum += nums[i];
        }

        return -1;
    }
};
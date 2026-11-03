class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        int max = INT_MIN;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(max < nums[i]){
                max = nums[i];
            }
        }

        int sum  =  0;

        for(int i : nums){

            sum = max - i + sum;
        }

        return sum;
    }
};
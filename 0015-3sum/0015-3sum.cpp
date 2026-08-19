class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>>ans;

        int n = nums.size();

        sort(nums.begin() , nums.end());

    for(int i = 0; i < n - 2; i++){

        if(i > 0 && nums[i] == nums[ i - 1]){
            continue;
        }

        int l = i + 1;
        int r = n - 1;

        while(l < r){

            int sum = nums[i] + nums[l] + nums[r];

            if(0 == sum){
                ans.push_back({nums[i], nums[l], nums[r]});

                while(l < r && nums[l + 1] == nums[l]){
                l++;
                }

                while(l < r && nums[r - 1] == nums[r]){
                r--;
                }

                l++;
                r--;
            }

            else if(sum < 0){
                l++;
            }

            else{
                r--;
            }
        }
        }

        return ans;
    }

};
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        // unordered_map<int , int>mp;
         vector<int>ans;

        // for(int i : nums){
        //     mp[i]++;
        // }

        // for(auto const &pair : mp){
        //     if(pair.second == 2){
        //         ans.push_back(pair.first);
        //     }
        // }

        for(int i = 0; i < nums.size(); i++){

            int val = abs(nums[i]);

            int index = val - 1;

            if(nums[index] < 0){
                ans.push_back(val);
            }

            else{
                nums[index] = -nums[index];
            }
        }

        return ans;
    }
};
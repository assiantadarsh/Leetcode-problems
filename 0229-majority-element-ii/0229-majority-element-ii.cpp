class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        // orderd_map<int , int>mp;

        int n = nums.size();
         unordered_map<int, int> mp;

        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }

        int majority = n / 3;

        vector<int>ans;

        for(auto it : mp){
            if(it.second > majority){
                ans.push_back(it.first);
            }
        }

        return ans;

    }
};
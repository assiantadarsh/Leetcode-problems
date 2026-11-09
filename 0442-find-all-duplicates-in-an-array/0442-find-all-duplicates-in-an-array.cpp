class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int>ans;

        unordered_map<int , int>mp;

        for(int i : nums){
            mp[i]++;
        }

        for(auto const &pair : mp){
            if(pair.second == 2){
                ans.push_back(pair.first);
            }
        }

        return ans;
    }
};
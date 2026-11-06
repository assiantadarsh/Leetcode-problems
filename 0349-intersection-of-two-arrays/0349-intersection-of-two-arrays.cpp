class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>ans;

        unordered_set<int> mp1;

        int n1 = nums1.size();

        for(int i = 0; i < n1; i++){
            mp1.insert(nums1[i]);
        }

        for(int i : nums2){
            if(mp1.count(i) > 0){
                ans.push_back(i);
                mp1.erase(i);
            }
        }
        
        return ans;

    }
};
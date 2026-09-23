class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        
        int count = 0;
        int equal = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < target){
                count++;
            } 
            else if(nums[i] == target) {
                equal++;
            }
        }
        
        for(int j = count; j < count + equal; j++){
            ans.push_back(j);
        }
        
        return ans;
    }
};

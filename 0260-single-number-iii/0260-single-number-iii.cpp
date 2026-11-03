class Solution { 
public: 
    vector<int> singleNumber(vector<int>& nums) { 
        
        unordered_map<int, int> countMap; 
        vector<int> ans; 

        
        for(int num : nums){ 
            countMap[num]++; 
        } 

        for(auto const& pair : countMap){ 
            if(pair.second == 1){ 
                ans.push_back(pair.first); 
            } 
        
            if(ans.size() == 2){ 
                return ans; 
            } 
        } 
        return ans; 
    } 
};

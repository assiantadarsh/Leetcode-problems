class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
       unordered_map<int, int> duplicates;

       for(int num : nums)
       {
        duplicates[num]++;
       }

        for(auto const &pair : duplicates){
            if(pair.second > 1){
                return pair.first;
            }
        }

        return -1;
    }
};
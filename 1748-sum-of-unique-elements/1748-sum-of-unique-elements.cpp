class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        unordered_map<int , int>mp;

        int sum = 0;

        for(int i : nums){
            mp[i]++;
        }

        for(auto const &pair : mp){

            if(pair.second == 1){
                sum += pair.first;
            }
        }
        return sum;
    }
};
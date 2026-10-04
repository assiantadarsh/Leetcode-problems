class Solution {
public:
    int firstUniqChar(string s) {
        
        int len = s.size();

        unordered_map<char, int> freq;

        for(int i = 0; i < len; i++){
            freq[s[i]]++;
        }

        for(int i = 0; i < len; i++){
            if(freq[s[i]] == 1){
                return i;
            }
        }
        
        return -1;
    }
};
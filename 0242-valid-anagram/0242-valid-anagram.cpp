class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char, int> map_s;
        unordered_map<char, int> map_tt;

        if(s.length() != t.length()){
            return false;
        }

        for(int i = 0; i < s.length(); i++){
            map_s[s[i]]++;
        }

        for(int i = 0; i < t.length(); i++){
            map_tt[t[i]]++;
        }

        if(map_s == map_tt){
            return true;
        }
        return false;
    }
};
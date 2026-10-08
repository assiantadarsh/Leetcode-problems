class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        unordered_map<char, string> mp1;
        unordered_map<string, char> mp2;
        
        int k = 0;
        int count = 0;

        while(k < s.length()) {
                if(s[k] == ' '){
                    count++;
                }
                k++;
        }

        if(count != pattern.length() - 1){
            return false;
        }

        
        int j = 0;

        for(int i = 0; i < pattern.length(); i++) {

            string words = "";

            while(j < s.length() && s[j] != ' ') {
                words += s[j];
                j++;
            }

            j++;

            if(mp1.find(pattern[i]) != mp1.end()) {
                if(mp1[pattern[i]] != words) {
                    return false;
                }
            }

            if(mp2.find(words) != mp2.end()) {
                if(mp2[words] != pattern[i]) {
                    return false;
                }
            }

            mp1[pattern[i]] = words;
            mp2[words] = pattern[i];
        }

        return true;
    }
};
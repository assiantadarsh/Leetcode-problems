class Solution {
public:
    bool canConstruct(string r, string m) {
        
        int mp1[26] = {0};
        int mp2[26] = {0};

        for(int i = 0; i < r.length(); i++){
            mp1[r[i] - 'a']++;
        }

        for(int i = 0; i < m.length(); i++){
            mp2[m[i] - 'a']++;
        }

        for(int i = 0; i < 26; i++){

            if(mp1[i] > mp2[i]){
                return false;
            }
        }

        return true;
    }
};
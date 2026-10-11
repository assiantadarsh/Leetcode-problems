class Solution {
public:
    bool canConstruct(string r, string m) {
        
        unordered_map<char , int>mp1;
        unordered_map<char , int>mp2;

        for(int i = 0; i < r.length(); i++){
            mp1[r[i]]++;
        }

        for(int i = 0; i < m.length(); i++){
            mp2[m[i]]++;
        }

        for(int i = 0; i < r.length(); i++){

            if(i != 0 && r[i - 1] == r[i]){
                continue;
            }

            else if(mp1[r[i]] > mp2[r[i]]){
                return false;
            }

        }

        return true;
    }
};
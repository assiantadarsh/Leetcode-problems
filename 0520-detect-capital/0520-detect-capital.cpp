class Solution {
public:
    bool detectCapitalUse(string word) {

        bool all_c = true;
        bool all_s = true;
        bool first_c = false;

        if(word[0] >= 'A' && word[0] <= 'Z'){
            first_c = true;
        }

        for(int i = 0; i < word.length(); i++){

            if(word[i] >= 'a' && word[i] <= 'z'){
                all_c = false;
            }

            if(word[i] >= 'A' && word[i] <= 'Z'){
                all_s = false;
            }

            if(i != 0 && word[i] >= 'A' && word[i] <= 'Z'){
                first_c = false;
            }

        }

        if(all_c == true || all_s == true || first_c == true){
            return true;
        }
        return false;
    }
};
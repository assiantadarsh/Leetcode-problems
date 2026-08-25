class Solution {
public:
    string reverseVowels(string s) {
        
        int i = 0;
        int j = s.size() - 1;

        while(i < j){

            char tempi = tolower(s[i]);
            char tempj = tolower(s[j]);


            if(tempi != 'a' && tempi != 'e' && tempi != 'i' && tempi != 'o' && tempi != 'u'){
                i++;
            }

            else if(tempj != 'a' && tempj != 'e' && tempj != 'i' && tempj != 'o' && tempj != 'u'){
                j--;
            }

            else{
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};
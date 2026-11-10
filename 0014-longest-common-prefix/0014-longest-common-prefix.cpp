class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if(strs.size() == 0) return "";

        string st = strs[0];
        
        for(int i = 1; i < strs.size(); i++){

            while(strs[i].find(st) != 0){

                st = st.substr(0 , st.size() - 1);

                if(st.size() == 0) return "";
                
            }
        }

        return st;
    }
};
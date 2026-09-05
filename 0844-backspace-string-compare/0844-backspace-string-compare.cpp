class Solution {
public:
    bool backspaceCompare(string s, string t) {

        vector<char> vs;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != '#'){ 
                vs.push_back(s[i]);
            }
            else{
                if(!vs.empty()){
                    vs.pop_back();
                }
            }
        }

        string ans_s = "";
        for(int i = 0; i < vs.size(); i++){
            ans_s += vs[i];
        }

        
        vector<char> vt;
        for(int i = 0; i < t.size(); i++){ 
            if(t[i] != '#'){ 
                vt.push_back(t[i]);
            }
            else{
                if(!vt.empty()){
                    vt.pop_back();
                }
            }
        }

        string ans_tt = "";
        for(int i = 0; i < vt.size(); i++){ 
            ans_tt += vt[i];
        }  

        
        return ans_s == ans_tt;
    }
};

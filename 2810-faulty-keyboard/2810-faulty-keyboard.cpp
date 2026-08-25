class Solution {
public:
    string finalString(string s) {

        string ans = "";
        
        for(int i = 0; i < s.size(); i++){

            if(s[i] != 'i'){
                ans += s[i];
            }

            else{
                int j = 0;
                int k = ans.size() -1;

                while(j < k){
                    swap(ans[j] , ans[k]);
                    j++;
                    k--;
                }
            }
        }

        return ans;
    }
};
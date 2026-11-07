class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        
        vector<int>cindex;

        vector<int>ans;

        int n = s.length();

        for(int i = 0; i < n; i++){
            if(s[i] == c){
                cindex.push_back(i);
            }
        }

        for(int i = 0; i < n; i++){

            int j = 0;
            int min_index = INT_MAX;

            while(j < cindex.size()){
                int sum = abs(i - cindex[j]);
                min_index = min(sum , min_index);
                j++;
            }

            ans.push_back(min_index);   
        }

        return ans;
    }
};
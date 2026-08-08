class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        int n = ops.size();

        vector<int>ans;
        int k = 0;

        for(int i = 0 ; i < n; i++){

            if(ops[i] == "C") {
                ans.pop_back();
            }

            else if(ops[i] == "D"){
                ans.push_back(2 * ans.back());
            }

            else if(ops[i] == "+"){
                int n = ans.size();

                ans.push_back(ans[n -1 ] + ans[n - 2]);

            }

            else{
                ans.push_back(stoi(ops[i]));
            }
            
        }
        int sum = 0;
        for(int i = 0; i < ans.size(); i++){
            sum += ans[i];
        }

        return sum;
    }
};
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int maxr = n - 1;
        int maxc = m - 1;
        int minr = 0;
        int minc = 0;
        int tne = n * m;
        int count = 0;
        vector<int> ans;

        while(count < tne){
            for(int j = minc;j <=maxc;j++){
                ans.push_back(matrix[minr][j]);
                count++;
            }
            minr++;
            if(count >= tne) break;

            for(int i = minr;i<=maxr;i++){
                ans.push_back(matrix[i][maxc]);
                count++;
            }
            maxc--;
            if(count >= tne) break;
            
            for(int j = maxc;j>=minc;j--){
                ans.push_back(matrix[maxr][j]);
                count++;
            }
            maxr--;
            if(count >= tne) break;

            for(int i = maxr;i>= minr;i--){
                ans.push_back(matrix[i][minc]);
                count++;
            }
            minc++;
            if(count >= tne) break;

        }
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));
        int count = 1;
        int minr = 0;
        int maxr = n -1 ;
        int minc = 0;
        int maxc = n - 1;
        int tne = n * n;

        while(count <= tne){
            for(int i = minc;i<=maxc;i++){
                ans[minr][i] = count++;        
            }
            minr++;
            
            for(int i = minr;i<=maxr;i++){
                ans[i][maxc] = count++;
            }
            maxc--;

            for(int i = maxc;i>=minc;i--){
                ans[maxr][i] = count++;
            }
            maxr--;
            for(int i = maxr;i>=minr;i--){
                ans[i][minc] = count++;
            }
            minc++;
        }
        return ans;
    }
};
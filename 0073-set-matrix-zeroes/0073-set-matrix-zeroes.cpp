class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        vector<vector<int>>c = arr;
        

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(c[i][j] == 0){
                // Row zero 
                for(int k = 0;k<m;k++){
                    arr[i][k] = 0;
                }
                // Column Zero
                for(int k = 0;k<n;k++){
                    arr[k][j] = 0;
                }
            }
        }
    }
    }
};
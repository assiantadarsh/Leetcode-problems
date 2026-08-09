class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int ans = 0;
        
        int i = 0;  // Left pointer
        int j = height.size() - 1 ;// Right pointer

        while(i < j){

            int width = j  - i;

            int length = min(height[i] , height[j]);

            int area = width * length;

            ans = max(ans , area);

            if(height[i] < height[j]) i++;
            else j--;
        }

        return ans;
    }
};
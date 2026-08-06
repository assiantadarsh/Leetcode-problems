class Solution {
public:
    int smallestNumber(int n, int t) {

        for (int num = n; num <= n + 10; ++num) {
            int prod = 1;
            int temp = num;

            while (temp > 0) {
                prod *= (temp % 10);
                temp /= 10;
            }
            
            if (prod % t == 0) {
                return num;
            }
        }
        return -1;
    }
};
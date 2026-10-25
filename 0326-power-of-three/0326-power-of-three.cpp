class Solution {
public:
    bool isPowerOfThree(int n) {

        if(n <= 0) return false;
        
        // for(int i = 0; i < 20; i++){

        //     int ans = pow(3 , i);

        //     if(ans == n) return true;
        // }

        while(n % 3 == 0){
            n = n / 3;
        }

        return n == 1;
    }
};
class Solution {
public:
    int countPrimes(int n) {

        if(n == 0 || n == 1 || n == 2) return 0;

        vector<int> prime(n, true); 

        prime[0] = false;
        prime[1] = false;

        for(int p = 2; p * p < n; p++){

            if(prime[p]){
                for(int i = p * p; i < n; i += p){
                    prime[i] = false;
                }
            }

        }

        int count = 0;
        for(int i = 2; i < n; i++){ 
            if(prime[i]) count++;
        }

        return count;
    }
};

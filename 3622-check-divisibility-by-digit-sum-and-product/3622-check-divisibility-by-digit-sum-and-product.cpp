class Solution {
public:
    bool checkDivisibility(int n) {

      int sum = 0;
      int pd = 1;
      int temp = n;

      while(n != 0){

        int rem = n % 10;

        if(INT_MAX < rem * 10 || INT_MIN > rem * 10){
            return false;
        }

        sum = sum + rem;
        pd = pd * rem;
        n = n / 10;

      } 

      if((temp % (sum + pd)) == 0) {
        return true;

    }

      return false; 
    }
};
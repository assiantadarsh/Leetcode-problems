class Solution {
public:
    int alternateDigitSum(int n) {
        
        int count = 1;
        int sum = 0;
        int rev = 0;

        int temp = n;

        while(temp != 0){
            int rem = temp % 10;

            rev = rev * 10 + rem;

            temp /= 10;
        }

        while(rev != 0){

            int rem = rev % 10;

            if(count % 2 != 0){
                sum += rem; 
            }

            else{
                sum -= rem;
            }

            count++;
            rev = rev / 10;
        }

        return sum;
    }
};
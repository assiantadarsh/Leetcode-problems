class Solution {
public:
    bool isSameAfterReversals(int num) {
        
        if(num == 0){
            return true;
        }
        
        if(num % 10 == 0){
            return false;
        }

        int first_rev = 0;

        int temp = num;

        while(num > 0){

            int rem = num % 10;

            first_rev = first_rev * 10 + rem;

            num = num / 10;
        }

        int sec_rev = 0;

        while(first_rev > 0){

            int rem = first_rev % 10;

            sec_rev = sec_rev * 10 + rem;

            first_rev /= 10;
        }

        return sec_rev = temp;
    }
};
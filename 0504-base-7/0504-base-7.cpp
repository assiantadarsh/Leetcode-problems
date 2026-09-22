class Solution {
public:
    string convertToBase7(int num) {
        
        string ans = "";
        bool negative = num < 0;

        if(num == 0){
            return "0";
        }

        long long temp = abs((long long )num);

        while(temp > 0){

            int rem = temp % 7;
            temp = temp / 7;

            ans += (rem + '0');
        }

        reverse(ans.begin() , ans.end());

        if(negative){
            ans = '-' + ans;
        }

        return ans;
    }
};
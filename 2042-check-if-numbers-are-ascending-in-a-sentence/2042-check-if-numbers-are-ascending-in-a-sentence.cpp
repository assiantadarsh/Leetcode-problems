class Solution {
public:
    bool areNumbersAscending(string s) {

        int max = INT_MIN;

        int j = 0;

        int n = s.length();

        while(j < n){

            if(s[j] >= '0' && s[j] <= '9'){

                int digit = 0;

                while (j < n && s[j] >= '0' && s[j] <= '9') {
                    digit = digit * 10 + (s[j] - '0');
                    j++;
                }

                if(max < digit){
                    max = digit;
                }
                
                else{
                    return false;
                }
            }

            else{
                j++;
            }

        }

        return true;
    }
};
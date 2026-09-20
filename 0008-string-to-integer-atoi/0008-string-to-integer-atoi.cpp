class Solution {
public:
    int myAtoi(string s) {
        
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }

        if(s[0] >= 'a' && s[0] <= 'z'){
            return 0;
        }

       int sign = 1;
       int n = s.length();
       int i = 0;

       while( i < n && s[i] == ' '){
            i++;
       }
    
        if(i < n && (s[i] == '-' ||s[i] == '+')){
            if(s[i] == '-'){
                sign = -1;
            }

            i++;
        }

        long long ans = 0;

        while(i < n && s[i] >= '0' && s[i] <= '9'){

            int d = s[i] - '0';

            ans = ans * 10 + d;

            if(sign * ans > INT_MAX){
                return INT_MAX;
            }

            if(sign * ans < INT_MIN){
                return INT_MIN;
            }
            i++;
        }

        return sign * ans;

    }
};
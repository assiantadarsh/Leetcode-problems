class Solution {
public:
    bool isValid(string s) {

        int n = s.length();

        if (n % 2 != 0)
            return false;

        char st[n];
        int top = -1;

        for (int i = 0; i < n; i++) {

            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st[++top] = s[i];
                continue;
            }

            if (top == -1)
                return false;

            if ((s[i] == ')' && st[top] == '(') ||
                (s[i] == ']' && st[top] == '[') ||
                (s[i] == '}' && st[top] == '{')) {

                top--;
            }
            else {
                return false;
            }
        }

        if(top == -1){
            return true;
        }

        return false;
    }
};
class Solution {
public:
    int compress(vector<char>& chars) {
        
        int n = chars.size();

        if(n == 1){
            return n;
        }

        int idx = 0;

        for(int i = 0; i < n; i++){
            char ch = chars[i];

            int count = 0;

            while(i < n && ch == chars[i]){
                count++;
                i++;
            }

            if(count == 1){
                chars[idx++] = ch;
            }

            else{

                string str = to_string(count);
                chars[idx++] = ch;

                for(char dig : str){
                    chars[idx++] = dig;
                }
            }

            i--;
        }

        return idx;
    }
};
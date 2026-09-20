class Solution {
public:
    int reverseDegree(string s) {

        char arr[26] = {
        'z','y','x','w','v','u','t','s','r','q','p','o','n',
        'm','l','k','j','i','h','g','f','e','d','c','b','a'
        };

        int sum = 0;
        
        for(int i = 0; i < s.length(); i++){

            int index_value = 'z' - s[i] + 1;

            // for(int j = 0; j < 26; j++){
            //     if(s[i] == arr[j]){
            //         index_value = j + 1;
            //         break;
            //     }
            // }

            index_value *= (i + 1);
            sum +=  index_value;

        }

        return sum;
    }
};
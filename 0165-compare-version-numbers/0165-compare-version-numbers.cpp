class Solution {
public:
    int compareVersion(string version1, string version2) {
        
        int n1 = version1.length();
        int n2 = version2.length();

        for(int i = 0 , j = 0; i < n1 || j < n2; i++ , j++){

            int x1 = 0;
            int x2 = 0;

            while(i < n1 && version1[i] != '.'){
                x1 = x1 * 10 + (version1[i] - '0');
                i++;
            }

            while(j < n2 && version2[j] != '.'){
                x2 = x2 * 10 + (version2[j] - '0');
                j++;
            }

            if(x1 < x2) return -1;
            else if(x1 > x2) return 1;
        }

        return 0;
    }
};
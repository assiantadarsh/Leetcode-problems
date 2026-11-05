class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        int count = 0;

        for(int i = 0; i < arr1.size(); i++){

            bool issuccess = false;

            for(int j = 0; j < arr2.size(); j++){

                int sum = abs(arr1[i] - arr2[j]);
                if(sum <= d){
                    issuccess = true;
                    break;
                }
            }

            if(!issuccess){
                count++;
            }
        }

        return count;
    }
};
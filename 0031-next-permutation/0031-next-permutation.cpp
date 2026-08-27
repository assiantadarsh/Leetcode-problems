class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();
        // Find pivot
        int pivot = -1;

        for(int i = n -2 ; i >= 0; i--){
            if(nums[i] < nums[i + 1]){
                pivot = i;
                break;
            }
        }

        if(pivot == -1){
            int i = 0;
            int j = n - 1;

            while(i < j){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
            return;
        }

        // Find right most element 

        for(int i = n -1; i >= 0; i--){
            if(nums[i] > nums[pivot]){
                swap(nums[i] , nums[pivot]);
                break;
            }
        }

        // Reverse 

        int i = pivot + 1;
        int j = n - 1;

        while(i < j){
            swap(nums[i] , nums[j]);
            i++;
            j--;
        }
    }
};
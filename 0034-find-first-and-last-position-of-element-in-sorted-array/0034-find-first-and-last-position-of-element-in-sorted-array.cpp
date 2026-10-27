class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
       
        int n = arr.size();
        int i = 0 , j = n-1;
        int last = -1;
        int first = -1;
        
        while(i <= j){
            int mid = i + (j - i)/2;

            if(arr[mid] == target){
                first = mid;
                j = mid -1;
            }
            else if(arr[mid] > target){
                j = mid - 1;
            }
            else{
                i = mid + 1;
            }
        }
        int k = 0,q = n - 1;
        while(k <= q){
            int mid = k + (q - k)/2;

            if(arr[mid] == target){
                last = mid;
                k = mid + 1;
            }
            else if(arr[mid] > target){
                q = mid - 1;
            }
            else{
                k = mid + 1;
            }
        }
        return {first,last};
    }
};
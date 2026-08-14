class Solution {
public:
    int search(vector<int>& nums, int tar) {

        int st = 0;
        int end = nums.size() - 1;

        while(st <= end){

            int mid = st + (end - st)/2;

            if(nums[mid] == tar){
                return mid;
            }

            if(nums[st] <= nums[mid]){  // Left half sorted

                if(nums[st] <= tar && nums[mid] >= tar){
                    end = mid - 1;
                }
                else{
                    st = mid + 1;
                }
            }

            else{
                if(nums[mid] <= tar && nums[end] >= tar){
                    st = mid + 1;
                }
                else{
                    end  = mid - 1;
                }
            }
        }

        return -1;
    }

};
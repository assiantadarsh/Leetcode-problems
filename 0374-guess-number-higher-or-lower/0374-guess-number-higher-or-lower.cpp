/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
       long long  st = 0;
       long long end = n;

       while(st <= end){

            long long mid = st + (end - st) / 2;

            int result = guess(mid);

            if(result == 0) {
                return mid;
            }

            else if(result == -1) {
                end = mid - 1;
            }

            else {
                st = mid + 1;
            }
        }
    return -1;
    }
};